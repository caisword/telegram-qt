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

#ifndef TELEGRAMNAMESPACE_HPP
#define TELEGRAMNAMESPACE_HPP

#include "telegramqt_global.h"

#include <QObject>
#include <QFlags>
#include <QMetaType>

class CTelegramDispatcher;
class CTelegramAuthModule;

class TELEGRAMQT_EXPORT TelegramNamespace : public QObject
{
    Q_OBJECT
    Q_ENUMS(ContactStatus)
public:
    enum ContactStatus {
        ContactStatusUnknown,
        ContactStatusOffline,
        ContactStatusOnline
    };

    enum MessageFlag {
        MessageFlagNone      = 0x0,
        MessageFlagRead      = 0x1, // Message was read
        MessageFlagOut       = 0x2, // Message is outgoing
        MessageFlagForwarded = 0x4,
        MessageFlagIsReply   = 0x8,
    };
    Q_DECLARE_FLAGS(MessageFlags, MessageFlag)

    enum MessageType {
        MessageTypeUnsupported = 0x00,
        MessageTypeText        = 0x01,
        MessageTypePhoto       = 0x02,
        MessageTypeAudio       = 0x04,
        MessageTypeVideo       = 0x08,
        MessageTypeContact     = 0x10,
        MessageTypeDocument    = 0x20,
        MessageTypeGeo         = 0x40,
        MessageTypeWebPage     = 0x80,
        MessageTypeAll         = 0xff
    };
    Q_DECLARE_FLAGS(MessageTypeFlags, MessageType)

    enum AuthSignError {
        AuthSignErrorUnknown,
        AuthSignErrorAppIdIsInvalid,
        AuthSignErrorPhoneNumberIsInvalid,
        AuthSignErrorPhoneNumberIsOccupied,
        AuthSignErrorPhoneNumberIsUnoccupied,
        AuthSignErrorPhoneCodeIsInvalid,
        AuthSignErrorPhoneCodeIsExpired,
        AuthSignErrorPasswordHashInvalid,
        AuthSignErrorFirstNameIsInvalid,
        AuthSignErrorLastNameIsInvalid
    };

    enum UnauthorizedError {
        UnauthorizedUnknownError,
        UnauthorizedErrorKeyUnregistered,
        UnauthorizedErrorKeyInvalid,
        UnauthorizedErrorUserDeactivated,
        UnauthorizedErrorUserSessionRevoked,
        UnauthorizedErrorUserSessionExpired,
        UnauthorizedErrorActiveUserRequired,
        UnauthorizedErrorNeedPermanentKey,
        UnauthorizedSessionPasswordNeeded,
    };

    enum UserNameStatus {
        UserNameStatusUnknown,
        UserNameStatusIsInvalid,
        UserNameStatusIsOccupied,
        UserNameStatusIsNotModified,
        UserNameStatusCanBeUsed,
        UserNameStatusCanNotBeUsed,
        UserNameStatusResolved,
        UserNameStatusAccepted
    };

    enum ConnectionState {
        ConnectionStateDisconnected,
        ConnectionStateConnecting,
        ConnectionStateConnected,
        ConnectionStateAuthRequired,
        ConnectionStateAuthenticated,
        ConnectionStateReady // Initializated
    };

    enum ContactLastOnline {
        ContactLastOnlineUnknown,
        ContactLastOnlineRecently,
        ContactLastOnlineLastWeek,
        ContactLastOnlineLastMonth,
        ContactLastOnlineMask = 0xf
    };

    enum MessageAction {
        MessageActionNone, // Cancel
        MessageActionTyping,
        MessageActionRecordVideo,
        MessageActionRecordAudio,
        MessageActionUploadVideo,
        MessageActionUploadAudio,
        MessageActionUploadPhoto,
        MessageActionUploadDocument,
        MessageActionGeoLocation,
        MessageActionChooseContact
    };

    static void registerTypes();

    class UserInfo;
    class RemoteFile;
    class MessageMediaInfo;

    struct Peer
    {
        enum Type {
            User,
            Chat
        };

        Peer(quint32 id = 0, Type t = User) : type(t), id(id)
        {
        }

        Type type;
        quint32 id;

        bool isValid() const { return id; }

        bool operator==(const Peer &p) const
        {
            return (p.type == type) && (p.id == id);
        }

        static Peer fromUserId(quint32 id)
        {
            return Peer(id, User);
        }
        static Peer fromChatId(quint32 id)
        {
            return Peer(id, Chat);
        }
    };

    struct DcOption
    {
        inline DcOption() : port(0) { }
        inline DcOption(const QString &a, quint32 p) : address(a), port(p) { }
        QString address;
        quint32 port;
    };

    class PasswordInfo
    {
    public:
        PasswordInfo();
        PasswordInfo(const PasswordInfo &otherData);
        ~PasswordInfo();

        PasswordInfo &operator=(const PasswordInfo &otherData);

        QByteArray newSalt();
        QString emailUnconfirmedPattern();
        QByteArray currentSalt();
        QString hint();
        bool hasRecovery();

    protected:
        friend class CTelegramAuthModule;
        class Private;

        Private *d;
    };

    struct Message
    {
        Message() :
            forwardContactId(0),
            id(0),
            timestamp(0),
            fwdTimestamp(0),
            type(MessageTypeUnsupported),
            flags(MessageFlagNone)
        {

        }

        quint32 fromId; // Telegram user id

        const Peer peer() const { return m_peer; }
        void setPeer(const Peer &peer) { m_peer = peer; }

        quint32 forwardContactId;
        QString text;
        quint32 id;
        quint32 timestamp;
        quint32 fwdTimestamp;
        MessageType type;
        MessageFlags flags;

    private:
        Peer m_peer;
    };

    class MessageMediaInfo
    {
    public:
        MessageMediaInfo();
        MessageMediaInfo(const MessageMediaInfo &info);
        ~MessageMediaInfo();

        MessageMediaInfo &operator=(const MessageMediaInfo &info);

        void setUploadFile(MessageType type, const RemoteFile &file);

        bool getRemoteFileInfo(RemoteFile *file) const;

        MessageType type() const;

        quint32 size() const;

        quint32 duration() const;
        bool setDuration(quint32 duration);

        QString documentFileName() const;
        bool setDocumentFileName(const QString &fileName);

        // Photo, Video
        QString caption() const;
        void setCaption(const QString &caption);

        // Valid for Document and Audio
        QString mimeType() const;
        bool setMimeType(const QString &mimeType);

        // Valid for GeoPoint and Document/Sticker
        QString alt() const;

        // GeoPoint
        double latitude() const;
        double longitude() const;
        void setGeoPoint(double latitude, double longitude);

        QString siteName() const;
        QString title() const;
        QString description() const;

    protected:
        friend class CTelegramDispatcher;
        class Private;

        Private *d;
    };

    class RemoteFile
    {
    public:
        enum Type {
            Undefined,
            Download,
            Upload
        };
        RemoteFile();
        RemoteFile(const RemoteFile &file);
        ~RemoteFile();

        RemoteFile &operator=(const RemoteFile &file);

        Type type() const;

        bool isValid() const;
        QString getUniqueId() const;

        QString fileName() const;
        quint32 size() const;
        QString md5Sum() const;

    protected:
        friend class CTelegramDispatcher;
        friend class UserInfo;
        friend class MessageMediaInfo;
        class Private;

        Private *d;
    };

    class UserInfo
    {
    public:
        enum ProfilePhotoSize {
            Small,
            Big
        };

        UserInfo();
        UserInfo(const UserInfo &info);
        ~UserInfo();

        UserInfo &operator=(const UserInfo &info);

        quint32 id() const;
        QString firstName() const;
        QString lastName() const;
        QString userName() const;
        QString phone() const;
        ContactStatus status() const;
        quint32 wasOnline() const;

        bool getProfilePhoto(RemoteFile *file, ProfilePhotoSize size = Small) const;

        // See TelegramNamespace::ContactLastOnline enum and a documentation for the contactLastOnline() method in the cpp file.

    protected:
        friend class CTelegramDispatcher;
        class Private;

        Private *d;
    };

    struct GroupChat
    {
        GroupChat(quint32 id = 0) :
            id(id),
            participantsCount(0),
            date(0),
            left(false)
        {
        }

        quint32 id;
        QString title;
        quint32 participantsCount;
        quint32 date;
        bool left;
    };

};

Q_DECLARE_METATYPE(TelegramNamespace::Peer)
Q_DECLARE_METATYPE(TelegramNamespace::DcOption)
Q_DECLARE_METATYPE(TelegramNamespace::Message)
Q_DECLARE_METATYPE(TelegramNamespace::GroupChat)
Q_DECLARE_METATYPE(TelegramNamespace::RemoteFile)
Q_DECLARE_METATYPE(TelegramNamespace::UserInfo)

Q_DECLARE_TYPEINFO(TelegramNamespace::DcOption, Q_MOVABLE_TYPE);
Q_DECLARE_TYPEINFO(TelegramNamespace::Message, Q_MOVABLE_TYPE);
Q_DECLARE_TYPEINFO(TelegramNamespace::GroupChat, Q_MOVABLE_TYPE);
Q_DECLARE_TYPEINFO(TelegramNamespace::RemoteFile, Q_MOVABLE_TYPE);
Q_DECLARE_TYPEINFO(TelegramNamespace::UserInfo, Q_MOVABLE_TYPE);

Q_DECLARE_OPERATORS_FOR_FLAGS(TelegramNamespace::MessageFlags)
Q_DECLARE_OPERATORS_FOR_FLAGS(TelegramNamespace::MessageTypeFlags)

#endif // TELEGRAMNAMESPACE_HPP
