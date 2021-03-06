/*
   Copyright (C) 2014-2015 Alexandr Akulich <akulichalexander@gmail.com>

   This file is a part of TelegramQt library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

 */

#include "CContactModel.hpp"
#include "CTelegramCore.hpp"

#include <QDateTime>
#include <QPixmapCache>

#ifdef CREATE_MEDIA_FILES
#include <QDir>
#endif

#include <QDebug>

CContactModel::CContactModel(CTelegramCore *backend, QObject *parent) :
    QAbstractTableModel(parent),
    m_backend(backend)
{
    connect(m_backend, SIGNAL(contactProfileChanged(quint32)),
            SLOT(whenContactProfileChanged(quint32)));
    connect(m_backend, SIGNAL(contactStatusChanged(quint32,TelegramNamespace::ContactStatus)),
            SLOT(whenContactStatusChanged(quint32)));
    connect(m_backend, SIGNAL(avatarReceived(quint32,QByteArray,QString,QString)),
            SLOT(whenAvatarReceived(quint32,QByteArray,QString)));
}

QVariant CContactModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (orientation != Qt::Horizontal) {
        return QVariant();
    }

    if (role != Qt::DisplayRole) {
        return QVariant();
    }

    switch (section) {
    case Phone:
        return tr("Phone");
    case UserName:
        return tr("Username");
    case FullName:
        return tr("Full name");
    case Status:
        return tr("Status");
    case TypingStatus:
        return tr("Typing status");
    case Avatar:
        return tr("Avatar");
    case Blocked:
        return tr("Blocked");
    default:
        break;
    }

    return QVariant();
}

QVariant CContactModel::data(const QModelIndex &index, int role) const
{
    Column section = static_cast<Column>(index.column());
    int contactIndex = index.row();

    if ((role == Qt::DecorationRole) && (section == Avatar)) {
        if (!m_contacts.at(contactIndex).avatar.isNull()) {
            return m_contacts.at(contactIndex).avatar;
        }

        return QVariant();
    }

    if ((role != Qt::DisplayRole) && (role != Qt::EditRole)) {
        return QVariant();
    }

    if (contactIndex >= rowCount()) {
        return QVariant();
    }

    switch (section) {
    case Status:
        return contactStatusStr(m_contacts.at(contactIndex));
    case TypingStatus:
        switch (m_contacts.at(contactIndex).typing) {
        case TelegramNamespace::MessageActionNone:
            return tr("No action");
        case TelegramNamespace::MessageActionTyping:
            return tr("Typing");
        case TelegramNamespace::MessageActionRecordVideo:
            return tr("Recording a video");
        case TelegramNamespace::MessageActionRecordAudio:
            return tr("Recording a audio");
        case TelegramNamespace::MessageActionUploadVideo:
            return tr("Uploading a video");
        case TelegramNamespace::MessageActionUploadAudio:
            return tr("Uploading a audio");
        case TelegramNamespace::MessageActionUploadPhoto:
            return tr("Uploading a photo");
        case TelegramNamespace::MessageActionUploadDocument:
            return tr("Uploading a file");
        case TelegramNamespace::MessageActionGeoLocation:
            return tr("Selecting a location");
        case TelegramNamespace::MessageActionChooseContact:
            return tr("Selecting a contact");
        default:
            return tr("Unknown action");
        }
    case Blocked:
        return m_contacts.at(contactIndex).blocked ? tr("true") : tr("false");
    default:
        return data(contactIndex, section);
    }

    return QVariant();
}

QVariant CContactModel::data(const QString &phone, Column column) const
{
    return data(indexOfContact(phone), column);
}

QVariant CContactModel::data(quint32 id, Column column) const
{
    return data(indexOfContact(id), column);
}

QVariant CContactModel::data(int contactIndex, CContactModel::Column column) const
{
    if (contactIndex < 0) {
        return QVariant();
    }

    switch (column) {
    case Id:
        return m_contacts.at(contactIndex).id();
    case Phone:
        return m_contacts.at(contactIndex).phone();
    case UserName:
        return m_contacts.at(contactIndex).userName();
    case FullName:
        return m_contacts.at(contactIndex).firstName() + QLatin1Char(' ') + m_contacts.at(contactIndex).lastName();
    case Status:
        return contactStatusStr(m_contacts.at(contactIndex));
    case TypingStatus:
        return m_contacts.at(contactIndex).typing;
    case Blocked:
        return m_contacts.at(contactIndex).blocked;
    case Avatar:
        return m_contacts.at(contactIndex).avatar;
    default:
        return QVariant();
    }
}

void CContactModel::addContact(quint32 id)
{
    if (hasContact(id)) {
        return;
    }
    qDebug() << Q_FUNC_INFO << id;

    beginInsertRows(QModelIndex(), m_contacts.count(), m_contacts.count());
    m_contacts.append(SContact());
    m_backend->getUserInfo(&m_contacts.last(), id);

    const QString token = m_backend->contactAvatarToken(id);
    if (!token.isEmpty()) {
        QPixmap avatar;

        if (QPixmapCache::find(token, &avatar)) {
            m_contacts.last().avatar = avatar;
        } else {
            m_backend->requestContactAvatar(id);
        }
    }

    endInsertRows();
}

bool CContactModel::removeContact(quint32 id)
{
    int contactIndex = indexOfContact(id);

    if (contactIndex < 0) {
        return false;
    }

    beginRemoveRows(QModelIndex(), contactIndex, contactIndex);
    m_contacts.removeAt(contactIndex);
    endRemoveRows();

    return true;
}

void CContactModel::setContactList(const QVector<quint32> &newContactList)
{
    beginResetModel();
    m_contacts.clear();

    for (int i = 0; i < newContactList.count(); ++i) {
        quint32 userId = newContactList.at(i);
        m_contacts.append(SContact());
        m_backend->getUserInfo(&m_contacts.last(), userId);

        const QString token = m_backend->contactAvatarToken(userId);

        if (token.isEmpty()) {
            continue;
        }

        QPixmap avatar;

        if (QPixmapCache::find(token, &avatar)) {
            m_contacts.last().avatar = avatar;
        } else {
            m_backend->requestContactAvatar(userId);
        }
    }

    endResetModel();
}

void CContactModel::setTypingStatus(quint32 id, TelegramNamespace::MessageAction action)
{
    int index = indexOfContact(id);

    if (index < 0) {
        return;
    }

    m_contacts[index].typing = action;

    QModelIndex modelIndex = createIndex(index, TypingStatus);
    emit dataChanged(modelIndex, modelIndex);
}

void CContactModel::setContactAvatar(quint32 id, const QPixmap &avatar)
{
    int index = indexOfContact(id);

    if (index < 0) {
        return;
    }

    m_contacts[index].avatar = avatar;

    QModelIndex modelIndex = createIndex(index, Avatar);
    emit dataChanged(modelIndex, modelIndex);
}

void CContactModel::clear()
{
    beginResetModel();
    m_contacts.clear();
    endResetModel();
}

void CContactModel::whenContactProfileChanged(quint32 id)
{
    int index = indexOfContact(id);
    if (index < 0) {
        return;
    }

    m_backend->getUserInfo(&m_contacts[index], id);
    QModelIndex modelIndexFirst = createIndex(index, UserName);
    QModelIndex modelIndexLast = createIndex(index, FullName);
    emit dataChanged(modelIndexFirst, modelIndexLast);
}

void CContactModel::whenContactStatusChanged(quint32 id)
{
    int index = indexOfContact(id);
    if (index < 0) {
        return;
    }

    m_backend->getUserInfo(&m_contacts[index], id);
    QModelIndex modelIndex = createIndex(index, Status);
    emit dataChanged(modelIndex, modelIndex);
}

void CContactModel::whenAvatarReceived(quint32 id, const QByteArray &data, const QString &mimeType)
{
    qDebug() << Q_FUNC_INFO << mimeType;

#ifdef CREATE_MEDIA_FILES
    QDir dir;
    dir.mkdir("avatars");

    QFile avatarFile(QString("avatars/%1.jpg").arg(id));
    avatarFile.open(QIODevice::WriteOnly);
    avatarFile.write(data);
    avatarFile.close();
#endif

    QPixmap avatar = QPixmap::fromImage(QImage::fromData(data));

    if (avatar.isNull()) {
        return;
    }

    avatar = avatar.scaled(64, 64, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    QPixmapCache::insert(m_backend->contactAvatarToken(id), avatar);
    setContactAvatar(id, avatar);
}

int CContactModel::indexOfContact(quint32 id) const
{
    for (int i = 0; i < m_contacts.count(); ++i) {
        if (m_contacts.at(i).id() == id) {
            return i;
        }
    }

    return -1;
}

int CContactModel::indexOfContact(const QString &phone) const
{
    for (int i = 0; i < m_contacts.count(); ++i) {
        if (m_contacts.at(i).phone() == phone) {
            return i;
        }
    }

    return -1;
}

bool CContactModel::hasContact(quint32 contactId) const
{
    return contacts().contains(contactId);
}

const SContact *CContactModel::contactAt(int index) const
{
    if ((index < 0) || (index >= m_contacts.count())) {
        return 0;
    }

    return &m_contacts[index];
}

const SContact *CContactModel::getContact(quint32 id) const
{
    int index = indexOfContact(id);
    if (index < 0) {
        return nullptr;
    }

    return contactAt(index);
}

QVector<quint32> CContactModel::contacts() const
{
    QVector<quint32> ids;

    for (int i = 0; i < m_contacts.count(); ++i) {
        ids.append(m_contacts.at(i).id());
    }

    return ids;
}

QString CContactModel::contactAt(int index, bool addName) const
{
    if ((index < 0) || (index >= m_contacts.count())) {
        return QString();
    }

    if (addName) {
        return m_contacts.at(index).phone() + QLatin1Char(' ') + data(index, FullName).toString();
    } else {
        return m_contacts.at(index).phone();
    }
}

QString CContactModel::getContactName(const TelegramNamespace::UserInfo &contact)
{
    if (!contact.userName().isEmpty()) {
        return contact.userName();
    }

    QString name = contact.firstName() + QLatin1Char(' ') + contact.lastName();
    if (!name.simplified().isEmpty()) {
        return name;
    }

    return tr("Unknown name");
}

QString CContactModel::getContactIdentifier(const TelegramNamespace::UserInfo &contact)
{
    if (!contact.phone().isEmpty()) {
        return contact.phone();
    }

    return QStringLiteral("user") + QString::number(contact.id());
}

QString CContactModel::contactStatusStr(const SContact &contact) const
{
    switch (contact.status()) {
    case TelegramNamespace::ContactStatusOnline:
        return tr("Online");
    case TelegramNamespace::ContactStatusOffline:
        if (contact.wasOnline() > 0) {
            const QDateTime wasOnline = QDateTime::fromMSecsSinceEpoch(quint64(contact.wasOnline()) * 1000);
            const QDate currentDate = QDateTime::currentDateTime().date();
            if (wasOnline.date().daysTo(currentDate) > 7) {
                return tr("Offline (since %1)").arg(wasOnline.toString(QLatin1String("yyyy.MM.dd")));
            } else if (wasOnline.date() == currentDate) {
                return tr("Offline (since %1)").arg(wasOnline.toString(QLatin1String("HH:mm")));
            } else {
                return tr("Offline (since %1)").arg(wasOnline.toString(QLatin1String("yyyy.MM.dd HH:mm")));
            }
        } else  {
            return tr("Offline");
        }
    case TelegramNamespace::ContactStatusUnknown:
    default:
        return tr("Unknown");
    }
}
