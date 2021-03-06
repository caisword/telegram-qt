/*
   Copyright (C) 2017 Alexandr Akulich <akulichalexander@gmail.com>

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

#ifndef CTELEGRAMMODULE_HPP
#define CTELEGRAMMODULE_HPP

#include <QObject>

#include "TLTypes.hpp"
#include "TelegramNamespace.hpp"

class CTelegramConnection;
class CTelegramDispatcher;

class CTelegramModule : public QObject
{
    Q_OBJECT
public:
    explicit CTelegramModule(QObject *parent = nullptr);
    void setDispatcher(CTelegramDispatcher *dispatcher);

    virtual void clear();

    // Connections API
    bool setWantedDc(quint32 dcId);
    CTelegramConnection *activeConnection() const;
    CTelegramConnection *getExtraConnection(quint32 dc);

    virtual void onConnectionAuthChanged(CTelegramConnection *connection, int newState);
    virtual void onNewConnection(CTelegramConnection *connection);

    // Getters
    bool getUserInfo(TelegramNamespace::UserInfo *userInfo, quint32 userId) const;
    bool getChatInfo(TelegramNamespace::GroupChat *outputChat, quint32 chatId) const;
    bool getChatParticipants(QVector<quint32> *participants, quint32 chatId);

    const TLUser *getUser(quint32 userId) const;
    const TLMessage *getMessage(quint32 messageId) const;

    TLInputPeer publicPeerToInputPeer(const TelegramNamespace::Peer &peer) const;
    TelegramNamespace::Peer peerToPublicPeer(const TLInputPeer &inputPeer) const;
    TelegramNamespace::Peer peerToPublicPeer(const TLPeer &peer) const;
    TLInputUser userIdToInputUser(quint32 id) const;

private:
    CTelegramDispatcher *m_dispatcher;

};

#endif // CTELEGRAMMODULE_HPP
