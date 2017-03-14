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

#include "TLTypesDebug.hpp"

// Generated TLTypes debug operators
QDebug operator<<(QDebug d, const TLAccountDaysTTL &type)
{
    d << "TLAccountDaysTTL(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::AccountDaysTTL:
        d << "days:" << type.days;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLAccountPassword &type)
{
    d << "TLAccountPassword(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::AccountNoPassword:
        d << "newSalt:" << type.newSalt;
        d << "emailUnconfirmedPattern:" << type.emailUnconfirmedPattern;
        break;
    case TLValue::AccountPassword:
        d << "currentSalt:" << type.currentSalt;
        d << "newSalt:" << type.newSalt;
        d << "hint:" << type.hint;
        d << "hasRecovery:" << type.hasRecovery;
        d << "emailUnconfirmedPattern:" << type.emailUnconfirmedPattern;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLAccountPasswordInputSettings &type)
{
    d << "TLAccountPasswordInputSettings(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::AccountPasswordInputSettings:
        d << "flags:" << type.flags;
        d << "newSalt:" << type.newSalt;
        d << "newPasswordHash:" << type.newPasswordHash;
        d << "hint:" << type.hint;
        d << "email:" << type.email;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLAccountPasswordSettings &type)
{
    d << "TLAccountPasswordSettings(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::AccountPasswordSettings:
        d << "email:" << type.email;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLAccountSentChangePhoneCode &type)
{
    d << "TLAccountSentChangePhoneCode(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::AccountSentChangePhoneCode:
        d << "phoneCodeHash:" << type.phoneCodeHash;
        d << "sendCallTimeout:" << type.sendCallTimeout;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLAudio &type)
{
    d << "TLAudio(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::AudioEmpty:
        d << "id:" << type.id;
        break;
    case TLValue::Audio:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        d << "date:" << type.date;
        d << "duration:" << type.duration;
        d << "mimeType:" << type.mimeType;
        d << "size:" << type.size;
        d << "dcId:" << type.dcId;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLAuthCheckedPhone &type)
{
    d << "TLAuthCheckedPhone(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::AuthCheckedPhone:
        d << "phoneRegistered:" << type.phoneRegistered;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLAuthExportedAuthorization &type)
{
    d << "TLAuthExportedAuthorization(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::AuthExportedAuthorization:
        d << "id:" << type.id;
        d << "bytes:" << type.bytes;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLAuthPasswordRecovery &type)
{
    d << "TLAuthPasswordRecovery(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::AuthPasswordRecovery:
        d << "emailPattern:" << type.emailPattern;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLAuthSentCode &type)
{
    d << "TLAuthSentCode(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::AuthSentCode:
        d << "phoneRegistered:" << type.phoneRegistered;
        d << "phoneCodeHash:" << type.phoneCodeHash;
        d << "sendCallTimeout:" << type.sendCallTimeout;
        d << "isPassword:" << type.isPassword;
        break;
    case TLValue::AuthSentAppCode:
        d << "phoneRegistered:" << type.phoneRegistered;
        d << "phoneCodeHash:" << type.phoneCodeHash;
        d << "sendCallTimeout:" << type.sendCallTimeout;
        d << "isPassword:" << type.isPassword;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLAuthorization &type)
{
    d << "TLAuthorization(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::Authorization:
        d << "hash:" << type.hash;
        d << "flags:" << type.flags;
        d << "deviceModel:" << type.deviceModel;
        d << "platform:" << type.platform;
        d << "systemVersion:" << type.systemVersion;
        d << "apiId:" << type.apiId;
        d << "appName:" << type.appName;
        d << "appVersion:" << type.appVersion;
        d << "dateCreated:" << type.dateCreated;
        d << "dateActive:" << type.dateActive;
        d << "ip:" << type.ip;
        d << "country:" << type.country;
        d << "region:" << type.region;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLBotCommand &type)
{
    d << "TLBotCommand(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::BotCommand:
        d << "command:" << type.command;
        d << "description:" << type.description;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLBotInfo &type)
{
    d << "TLBotInfo(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::BotInfoEmpty:
        break;
    case TLValue::BotInfo:
        d << "userId:" << type.userId;
        d << "version:" << type.version;
        d << "shareText:" << type.shareText;
        d << "description:" << type.description;
        d << "commands:" << type.commands;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLChannelParticipant &type)
{
    d << "TLChannelParticipant(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ChannelParticipant:
        d << "userId:" << type.userId;
        d << "date:" << type.date;
        break;
    case TLValue::ChannelParticipantSelf:
        d << "userId:" << type.userId;
        d << "inviterId:" << type.inviterId;
        d << "date:" << type.date;
        break;
    case TLValue::ChannelParticipantModerator:
        d << "userId:" << type.userId;
        d << "inviterId:" << type.inviterId;
        d << "date:" << type.date;
        break;
    case TLValue::ChannelParticipantEditor:
        d << "userId:" << type.userId;
        d << "inviterId:" << type.inviterId;
        d << "date:" << type.date;
        break;
    case TLValue::ChannelParticipantKicked:
        d << "userId:" << type.userId;
        d << "kickedBy:" << type.kickedBy;
        d << "date:" << type.date;
        break;
    case TLValue::ChannelParticipantCreator:
        d << "userId:" << type.userId;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLChannelParticipantRole &type)
{
    d << "TLChannelParticipantRole(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ChannelRoleEmpty:
        break;
    case TLValue::ChannelRoleModerator:
        break;
    case TLValue::ChannelRoleEditor:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLChannelParticipantsFilter &type)
{
    d << "TLChannelParticipantsFilter(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ChannelParticipantsRecent:
        break;
    case TLValue::ChannelParticipantsAdmins:
        break;
    case TLValue::ChannelParticipantsKicked:
        break;
    case TLValue::ChannelParticipantsBots:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLChatParticipant &type)
{
    d << "TLChatParticipant(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ChatParticipant:
        d << "userId:" << type.userId;
        d << "inviterId:" << type.inviterId;
        d << "date:" << type.date;
        break;
    case TLValue::ChatParticipantCreator:
        d << "userId:" << type.userId;
        break;
    case TLValue::ChatParticipantAdmin:
        d << "userId:" << type.userId;
        d << "inviterId:" << type.inviterId;
        d << "date:" << type.date;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLChatParticipants &type)
{
    d << "TLChatParticipants(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ChatParticipantsForbidden:
        d << "flags:" << type.flags;
        d << "chatId:" << type.chatId;
        d << "selfParticipant:" << type.selfParticipant;
        break;
    case TLValue::ChatParticipants:
        d << "chatId:" << type.chatId;
        d << "participants:" << type.participants;
        d << "version:" << type.version;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLContact &type)
{
    d << "TLContact(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::Contact:
        d << "userId:" << type.userId;
        d << "mutual:" << type.mutual;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLContactBlocked &type)
{
    d << "TLContactBlocked(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ContactBlocked:
        d << "userId:" << type.userId;
        d << "date:" << type.date;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLContactLink &type)
{
    d << "TLContactLink(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ContactLinkUnknown:
        break;
    case TLValue::ContactLinkNone:
        break;
    case TLValue::ContactLinkHasPhone:
        break;
    case TLValue::ContactLinkContact:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLContactSuggested &type)
{
    d << "TLContactSuggested(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ContactSuggested:
        d << "userId:" << type.userId;
        d << "mutualContacts:" << type.mutualContacts;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLDisabledFeature &type)
{
    d << "TLDisabledFeature(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::DisabledFeature:
        d << "feature:" << type.feature;
        d << "description:" << type.description;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLEncryptedChat &type)
{
    d << "TLEncryptedChat(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::EncryptedChatEmpty:
        d << "id:" << type.id;
        break;
    case TLValue::EncryptedChatWaiting:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        d << "date:" << type.date;
        d << "adminId:" << type.adminId;
        d << "participantId:" << type.participantId;
        break;
    case TLValue::EncryptedChatRequested:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        d << "date:" << type.date;
        d << "adminId:" << type.adminId;
        d << "participantId:" << type.participantId;
        d << "gA:" << type.gA;
        break;
    case TLValue::EncryptedChat:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        d << "date:" << type.date;
        d << "adminId:" << type.adminId;
        d << "participantId:" << type.participantId;
        d << "gAOrB:" << type.gAOrB;
        d << "keyFingerprint:" << type.keyFingerprint;
        break;
    case TLValue::EncryptedChatDiscarded:
        d << "id:" << type.id;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLEncryptedFile &type)
{
    d << "TLEncryptedFile(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::EncryptedFileEmpty:
        break;
    case TLValue::EncryptedFile:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        d << "size:" << type.size;
        d << "dcId:" << type.dcId;
        d << "keyFingerprint:" << type.keyFingerprint;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLEncryptedMessage &type)
{
    d << "TLEncryptedMessage(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::EncryptedMessage:
        d << "randomId:" << type.randomId;
        d << "chatId:" << type.chatId;
        d << "date:" << type.date;
        d << "bytes:" << type.bytes;
        d << "file:" << type.file;
        break;
    case TLValue::EncryptedMessageService:
        d << "randomId:" << type.randomId;
        d << "chatId:" << type.chatId;
        d << "date:" << type.date;
        d << "bytes:" << type.bytes;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLError &type)
{
    d << "TLError(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::Error:
        d << "code:" << type.code;
        d << "text:" << type.text;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLExportedChatInvite &type)
{
    d << "TLExportedChatInvite(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ChatInviteEmpty:
        break;
    case TLValue::ChatInviteExported:
        d << "link:" << type.link;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLFileLocation &type)
{
    d << "TLFileLocation(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::FileLocationUnavailable:
        d << "volumeId:" << type.volumeId;
        d << "localId:" << type.localId;
        d << "secret:" << type.secret;
        break;
    case TLValue::FileLocation:
        d << "dcId:" << type.dcId;
        d << "volumeId:" << type.volumeId;
        d << "localId:" << type.localId;
        d << "secret:" << type.secret;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLGeoPoint &type)
{
    d << "TLGeoPoint(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::GeoPointEmpty:
        break;
    case TLValue::GeoPoint:
        d << "longitude:" << type.longitude;
        d << "latitude:" << type.latitude;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLHelpAppChangelog &type)
{
    d << "TLHelpAppChangelog(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::HelpAppChangelogEmpty:
        break;
    case TLValue::HelpAppChangelog:
        d << "text:" << type.text;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLHelpAppUpdate &type)
{
    d << "TLHelpAppUpdate(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::HelpAppUpdate:
        d << "id:" << type.id;
        d << "critical:" << type.critical;
        d << "url:" << type.url;
        d << "text:" << type.text;
        break;
    case TLValue::HelpNoAppUpdate:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLHelpInviteText &type)
{
    d << "TLHelpInviteText(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::HelpInviteText:
        d << "message:" << type.message;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLHelpTermsOfService &type)
{
    d << "TLHelpTermsOfService(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::HelpTermsOfService:
        d << "text:" << type.text;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLImportedContact &type)
{
    d << "TLImportedContact(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ImportedContact:
        d << "userId:" << type.userId;
        d << "clientId:" << type.clientId;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputAppEvent &type)
{
    d << "TLInputAppEvent(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputAppEvent:
        d << "time:" << type.time;
        d << "type:" << type.type;
        d << "peer:" << type.peer;
        d << "data:" << type.data;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputAudio &type)
{
    d << "TLInputAudio(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputAudioEmpty:
        break;
    case TLValue::InputAudio:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputChannel &type)
{
    d << "TLInputChannel(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputChannelEmpty:
        break;
    case TLValue::InputChannel:
        d << "channelId:" << type.channelId;
        d << "accessHash:" << type.accessHash;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputContact &type)
{
    d << "TLInputContact(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputPhoneContact:
        d << "clientId:" << type.clientId;
        d << "phone:" << type.phone;
        d << "firstName:" << type.firstName;
        d << "lastName:" << type.lastName;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputDocument &type)
{
    d << "TLInputDocument(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputDocumentEmpty:
        break;
    case TLValue::InputDocument:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputEncryptedChat &type)
{
    d << "TLInputEncryptedChat(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputEncryptedChat:
        d << "chatId:" << type.chatId;
        d << "accessHash:" << type.accessHash;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputEncryptedFile &type)
{
    d << "TLInputEncryptedFile(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputEncryptedFileEmpty:
        break;
    case TLValue::InputEncryptedFileUploaded:
        d << "id:" << type.id;
        d << "parts:" << type.parts;
        d << "md5Checksum:" << type.md5Checksum;
        d << "keyFingerprint:" << type.keyFingerprint;
        break;
    case TLValue::InputEncryptedFile:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        break;
    case TLValue::InputEncryptedFileBigUploaded:
        d << "id:" << type.id;
        d << "parts:" << type.parts;
        d << "keyFingerprint:" << type.keyFingerprint;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputFile &type)
{
    d << "TLInputFile(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputFile:
        d << "id:" << type.id;
        d << "parts:" << type.parts;
        d << "name:" << type.name;
        d << "md5Checksum:" << type.md5Checksum;
        break;
    case TLValue::InputFileBig:
        d << "id:" << type.id;
        d << "parts:" << type.parts;
        d << "name:" << type.name;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputFileLocation &type)
{
    d << "TLInputFileLocation(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputFileLocation:
        d << "volumeId:" << type.volumeId;
        d << "localId:" << type.localId;
        d << "secret:" << type.secret;
        break;
    case TLValue::InputVideoFileLocation:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        break;
    case TLValue::InputEncryptedFileLocation:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        break;
    case TLValue::InputAudioFileLocation:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        break;
    case TLValue::InputDocumentFileLocation:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputGeoPoint &type)
{
    d << "TLInputGeoPoint(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputGeoPointEmpty:
        break;
    case TLValue::InputGeoPoint:
        d << "latitude:" << type.latitude;
        d << "longitude:" << type.longitude;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputPeer &type)
{
    d << "TLInputPeer(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputPeerEmpty:
        break;
    case TLValue::InputPeerSelf:
        break;
    case TLValue::InputPeerChat:
        d << "chatId:" << type.chatId;
        break;
    case TLValue::InputPeerUser:
        d << "userId:" << type.userId;
        d << "accessHash:" << type.accessHash;
        break;
    case TLValue::InputPeerChannel:
        d << "channelId:" << type.channelId;
        d << "accessHash:" << type.accessHash;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputPeerNotifyEvents &type)
{
    d << "TLInputPeerNotifyEvents(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputPeerNotifyEventsEmpty:
        break;
    case TLValue::InputPeerNotifyEventsAll:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputPeerNotifySettings &type)
{
    d << "TLInputPeerNotifySettings(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputPeerNotifySettings:
        d << "muteUntil:" << type.muteUntil;
        d << "sound:" << type.sound;
        d << "showPreviews:" << type.showPreviews;
        d << "eventsMask:" << type.eventsMask;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputPhoto &type)
{
    d << "TLInputPhoto(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputPhotoEmpty:
        break;
    case TLValue::InputPhoto:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputPhotoCrop &type)
{
    d << "TLInputPhotoCrop(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputPhotoCropAuto:
        break;
    case TLValue::InputPhotoCrop:
        d << "cropLeft:" << type.cropLeft;
        d << "cropTop:" << type.cropTop;
        d << "cropWidth:" << type.cropWidth;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputPrivacyKey &type)
{
    d << "TLInputPrivacyKey(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputPrivacyKeyStatusTimestamp:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputStickerSet &type)
{
    d << "TLInputStickerSet(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputStickerSetEmpty:
        break;
    case TLValue::InputStickerSetID:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        break;
    case TLValue::InputStickerSetShortName:
        d << "shortName:" << type.shortName;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputUser &type)
{
    d << "TLInputUser(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputUserEmpty:
        break;
    case TLValue::InputUserSelf:
        break;
    case TLValue::InputUser:
        d << "userId:" << type.userId;
        d << "accessHash:" << type.accessHash;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputVideo &type)
{
    d << "TLInputVideo(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputVideoEmpty:
        break;
    case TLValue::InputVideo:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLKeyboardButton &type)
{
    d << "TLKeyboardButton(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::KeyboardButton:
        d << "text:" << type.text;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLKeyboardButtonRow &type)
{
    d << "TLKeyboardButtonRow(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::KeyboardButtonRow:
        d << "buttons:" << type.buttons;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessageEntity &type)
{
    d << "TLMessageEntity(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessageEntityUnknown:
        d << "offset:" << type.offset;
        d << "length:" << type.length;
        break;
    case TLValue::MessageEntityMention:
        d << "offset:" << type.offset;
        d << "length:" << type.length;
        break;
    case TLValue::MessageEntityHashtag:
        d << "offset:" << type.offset;
        d << "length:" << type.length;
        break;
    case TLValue::MessageEntityBotCommand:
        d << "offset:" << type.offset;
        d << "length:" << type.length;
        break;
    case TLValue::MessageEntityUrl:
        d << "offset:" << type.offset;
        d << "length:" << type.length;
        break;
    case TLValue::MessageEntityEmail:
        d << "offset:" << type.offset;
        d << "length:" << type.length;
        break;
    case TLValue::MessageEntityBold:
        d << "offset:" << type.offset;
        d << "length:" << type.length;
        break;
    case TLValue::MessageEntityItalic:
        d << "offset:" << type.offset;
        d << "length:" << type.length;
        break;
    case TLValue::MessageEntityCode:
        d << "offset:" << type.offset;
        d << "length:" << type.length;
        break;
    case TLValue::MessageEntityPre:
        d << "offset:" << type.offset;
        d << "length:" << type.length;
        d << "language:" << type.language;
        break;
    case TLValue::MessageEntityTextUrl:
        d << "offset:" << type.offset;
        d << "length:" << type.length;
        d << "url:" << type.url;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessageGroup &type)
{
    d << "TLMessageGroup(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessageGroup:
        d << "minId:" << type.minId;
        d << "maxId:" << type.maxId;
        d << "count:" << type.count;
        d << "date:" << type.date;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessageRange &type)
{
    d << "TLMessageRange(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessageRange:
        d << "minId:" << type.minId;
        d << "maxId:" << type.maxId;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesAffectedHistory &type)
{
    d << "TLMessagesAffectedHistory(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessagesAffectedHistory:
        d << "pts:" << type.pts;
        d << "ptsCount:" << type.ptsCount;
        d << "offset:" << type.offset;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesAffectedMessages &type)
{
    d << "TLMessagesAffectedMessages(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessagesAffectedMessages:
        d << "pts:" << type.pts;
        d << "ptsCount:" << type.ptsCount;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesDhConfig &type)
{
    d << "TLMessagesDhConfig(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessagesDhConfigNotModified:
        d << "random:" << type.random;
        break;
    case TLValue::MessagesDhConfig:
        d << "g:" << type.g;
        d << "p:" << type.p;
        d << "version:" << type.version;
        d << "random:" << type.random;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesFilter &type)
{
    d << "TLMessagesFilter(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputMessagesFilterEmpty:
        break;
    case TLValue::InputMessagesFilterPhotos:
        break;
    case TLValue::InputMessagesFilterVideo:
        break;
    case TLValue::InputMessagesFilterPhotoVideo:
        break;
    case TLValue::InputMessagesFilterPhotoVideoDocuments:
        break;
    case TLValue::InputMessagesFilterDocument:
        break;
    case TLValue::InputMessagesFilterAudio:
        break;
    case TLValue::InputMessagesFilterAudioDocuments:
        break;
    case TLValue::InputMessagesFilterUrl:
        break;
    case TLValue::InputMessagesFilterGif:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesSentEncryptedMessage &type)
{
    d << "TLMessagesSentEncryptedMessage(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessagesSentEncryptedMessage:
        d << "date:" << type.date;
        break;
    case TLValue::MessagesSentEncryptedFile:
        d << "date:" << type.date;
        d << "file:" << type.file;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLNearestDc &type)
{
    d << "TLNearestDc(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::NearestDc:
        d << "country:" << type.country;
        d << "thisDc:" << type.thisDc;
        d << "nearestDc:" << type.nearestDc;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLPeer &type)
{
    d << "TLPeer(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::PeerUser:
        d << "userId:" << type.userId;
        break;
    case TLValue::PeerChat:
        d << "chatId:" << type.chatId;
        break;
    case TLValue::PeerChannel:
        d << "channelId:" << type.channelId;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLPeerNotifyEvents &type)
{
    d << "TLPeerNotifyEvents(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::PeerNotifyEventsEmpty:
        break;
    case TLValue::PeerNotifyEventsAll:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLPeerNotifySettings &type)
{
    d << "TLPeerNotifySettings(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::PeerNotifySettingsEmpty:
        break;
    case TLValue::PeerNotifySettings:
        d << "muteUntil:" << type.muteUntil;
        d << "sound:" << type.sound;
        d << "showPreviews:" << type.showPreviews;
        d << "eventsMask:" << type.eventsMask;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLPhotoSize &type)
{
    d << "TLPhotoSize(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::PhotoSizeEmpty:
        d << "type:" << type.type;
        break;
    case TLValue::PhotoSize:
        d << "type:" << type.type;
        d << "location:" << type.location;
        d << "w:" << type.w;
        d << "h:" << type.h;
        d << "size:" << type.size;
        break;
    case TLValue::PhotoCachedSize:
        d << "type:" << type.type;
        d << "location:" << type.location;
        d << "w:" << type.w;
        d << "h:" << type.h;
        d << "bytes:" << type.bytes;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLPrivacyKey &type)
{
    d << "TLPrivacyKey(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::PrivacyKeyStatusTimestamp:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLPrivacyRule &type)
{
    d << "TLPrivacyRule(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::PrivacyValueAllowContacts:
        break;
    case TLValue::PrivacyValueAllowAll:
        break;
    case TLValue::PrivacyValueAllowUsers:
        d << "users:" << type.users;
        break;
    case TLValue::PrivacyValueDisallowContacts:
        break;
    case TLValue::PrivacyValueDisallowAll:
        break;
    case TLValue::PrivacyValueDisallowUsers:
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLReceivedNotifyMessage &type)
{
    d << "TLReceivedNotifyMessage(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ReceivedNotifyMessage:
        d << "id:" << type.id;
        d << "flags:" << type.flags;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLReportReason &type)
{
    d << "TLReportReason(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputReportReasonSpam:
        break;
    case TLValue::InputReportReasonViolence:
        break;
    case TLValue::InputReportReasonPornography:
        break;
    case TLValue::InputReportReasonOther:
        d << "text:" << type.text;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLSendMessageAction &type)
{
    d << "TLSendMessageAction(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::SendMessageTypingAction:
        break;
    case TLValue::SendMessageCancelAction:
        break;
    case TLValue::SendMessageRecordVideoAction:
        break;
    case TLValue::SendMessageUploadVideoAction:
        d << "progress:" << type.progress;
        break;
    case TLValue::SendMessageRecordAudioAction:
        break;
    case TLValue::SendMessageUploadAudioAction:
        d << "progress:" << type.progress;
        break;
    case TLValue::SendMessageUploadPhotoAction:
        d << "progress:" << type.progress;
        break;
    case TLValue::SendMessageUploadDocumentAction:
        d << "progress:" << type.progress;
        break;
    case TLValue::SendMessageGeoLocationAction:
        break;
    case TLValue::SendMessageChooseContactAction:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLStickerPack &type)
{
    d << "TLStickerPack(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::StickerPack:
        d << "emoticon:" << type.emoticon;
        d << "documents:" << type.documents;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLStorageFileType &type)
{
    d << "TLStorageFileType(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::StorageFileUnknown:
        break;
    case TLValue::StorageFileJpeg:
        break;
    case TLValue::StorageFileGif:
        break;
    case TLValue::StorageFilePng:
        break;
    case TLValue::StorageFilePdf:
        break;
    case TLValue::StorageFileMp3:
        break;
    case TLValue::StorageFileMov:
        break;
    case TLValue::StorageFilePartial:
        break;
    case TLValue::StorageFileMp4:
        break;
    case TLValue::StorageFileWebp:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLTrue &type)
{
    d << "TLTrue(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::True:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLUpdatesState &type)
{
    d << "TLUpdatesState(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::UpdatesState:
        d << "pts:" << type.pts;
        d << "qts:" << type.qts;
        d << "date:" << type.date;
        d << "seq:" << type.seq;
        d << "unreadCount:" << type.unreadCount;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLUploadFile &type)
{
    d << "TLUploadFile(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::UploadFile:
        d << "type:" << type.type;
        d << "mtime:" << type.mtime;
        d << "bytes:" << type.bytes;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLUserProfilePhoto &type)
{
    d << "TLUserProfilePhoto(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::UserProfilePhotoEmpty:
        break;
    case TLValue::UserProfilePhoto:
        d << "photoId:" << type.photoId;
        d << "photoSmall:" << type.photoSmall;
        d << "photoBig:" << type.photoBig;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLUserStatus &type)
{
    d << "TLUserStatus(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::UserStatusEmpty:
        break;
    case TLValue::UserStatusOnline:
        d << "expires:" << type.expires;
        break;
    case TLValue::UserStatusOffline:
        d << "wasOnline:" << type.wasOnline;
        break;
    case TLValue::UserStatusRecently:
        break;
    case TLValue::UserStatusLastWeek:
        break;
    case TLValue::UserStatusLastMonth:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLVideo &type)
{
    d << "TLVideo(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::VideoEmpty:
        d << "id:" << type.id;
        break;
    case TLValue::Video:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        d << "date:" << type.date;
        d << "duration:" << type.duration;
        d << "mimeType:" << type.mimeType;
        d << "size:" << type.size;
        d << "thumb:" << type.thumb;
        d << "dcId:" << type.dcId;
        d << "w:" << type.w;
        d << "h:" << type.h;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLWallPaper &type)
{
    d << "TLWallPaper(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::WallPaper:
        d << "id:" << type.id;
        d << "title:" << type.title;
        d << "sizes:" << type.sizes;
        d << "color:" << type.color;
        break;
    case TLValue::WallPaperSolid:
        d << "id:" << type.id;
        d << "title:" << type.title;
        d << "bgColor:" << type.bgColor;
        d << "color:" << type.color;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLAccountAuthorizations &type)
{
    d << "TLAccountAuthorizations(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::AccountAuthorizations:
        d << "authorizations:" << type.authorizations;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLBotInlineMessage &type)
{
    d << "TLBotInlineMessage(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::BotInlineMessageMediaAuto:
        d << "caption:" << type.caption;
        break;
    case TLValue::BotInlineMessageText:
        d << "flags:" << type.flags;
        d << "noWebpage:" << type.noWebpage();
        d << "message:" << type.message;
        d << "entities:" << type.entities;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLChannelMessagesFilter &type)
{
    d << "TLChannelMessagesFilter(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ChannelMessagesFilterEmpty:
        break;
    case TLValue::ChannelMessagesFilter:
        d << "flags:" << type.flags;
        d << "importantOnly:" << type.importantOnly();
        d << "excludeNewMessages:" << type.excludeNewMessages();
        d << "ranges:" << type.ranges;
        break;
    case TLValue::ChannelMessagesFilterCollapsed:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLChatPhoto &type)
{
    d << "TLChatPhoto(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ChatPhotoEmpty:
        break;
    case TLValue::ChatPhoto:
        d << "photoSmall:" << type.photoSmall;
        d << "photoBig:" << type.photoBig;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLContactStatus &type)
{
    d << "TLContactStatus(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ContactStatus:
        d << "userId:" << type.userId;
        d << "status:" << type.status;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLDcOption &type)
{
    d << "TLDcOption(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::DcOption:
        d << "flags:" << type.flags;
        d << "ipv6:" << type.ipv6();
        d << "mediaOnly:" << type.mediaOnly();
        d << "id:" << type.id;
        d << "ipAddress:" << type.ipAddress;
        d << "port:" << type.port;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLDialog &type)
{
    d << "TLDialog(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::Dialog:
        d << "peer:" << type.peer;
        d << "topMessage:" << type.topMessage;
        d << "readInboxMaxId:" << type.readInboxMaxId;
        d << "unreadCount:" << type.unreadCount;
        d << "notifySettings:" << type.notifySettings;
        break;
    case TLValue::DialogChannel:
        d << "peer:" << type.peer;
        d << "topMessage:" << type.topMessage;
        d << "topImportantMessage:" << type.topImportantMessage;
        d << "readInboxMaxId:" << type.readInboxMaxId;
        d << "unreadCount:" << type.unreadCount;
        d << "unreadImportantCount:" << type.unreadImportantCount;
        d << "notifySettings:" << type.notifySettings;
        d << "pts:" << type.pts;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLDocumentAttribute &type)
{
    d << "TLDocumentAttribute(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::DocumentAttributeImageSize:
        d << "w:" << type.w;
        d << "h:" << type.h;
        break;
    case TLValue::DocumentAttributeAnimated:
        break;
    case TLValue::DocumentAttributeSticker:
        d << "alt:" << type.alt;
        d << "stickerset:" << type.stickerset;
        break;
    case TLValue::DocumentAttributeVideo:
        d << "duration:" << type.duration;
        d << "w:" << type.w;
        d << "h:" << type.h;
        break;
    case TLValue::DocumentAttributeAudio:
        d << "duration:" << type.duration;
        d << "title:" << type.title;
        d << "performer:" << type.performer;
        break;
    case TLValue::DocumentAttributeFilename:
        d << "fileName:" << type.fileName;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputBotInlineMessage &type)
{
    d << "TLInputBotInlineMessage(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputBotInlineMessageMediaAuto:
        d << "caption:" << type.caption;
        break;
    case TLValue::InputBotInlineMessageText:
        d << "flags:" << type.flags;
        d << "noWebpage:" << type.noWebpage();
        d << "message:" << type.message;
        d << "entities:" << type.entities;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputBotInlineResult &type)
{
    d << "TLInputBotInlineResult(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputBotInlineResult:
        d << "flags:" << type.flags;
        d << "id:" << type.id;
        d << "type:" << type.type;
        d << "title:" << type.title;
        d << "description:" << type.description;
        d << "url:" << type.url;
        d << "thumbUrl:" << type.thumbUrl;
        d << "contentUrl:" << type.contentUrl;
        d << "contentType:" << type.contentType;
        d << "w:" << type.w;
        d << "h:" << type.h;
        d << "duration:" << type.duration;
        d << "sendMessage:" << type.sendMessage;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputChatPhoto &type)
{
    d << "TLInputChatPhoto(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputChatPhotoEmpty:
        break;
    case TLValue::InputChatUploadedPhoto:
        d << "file:" << type.file;
        d << "crop:" << type.crop;
        break;
    case TLValue::InputChatPhoto:
        d << "id:" << type.id;
        d << "crop:" << type.crop;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputMedia &type)
{
    d << "TLInputMedia(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputMediaEmpty:
        break;
    case TLValue::InputMediaUploadedPhoto:
        d << "file:" << type.file;
        d << "caption:" << type.caption;
        break;
    case TLValue::InputMediaPhoto:
        d << "idInputPhoto:" << type.idInputPhoto;
        d << "caption:" << type.caption;
        break;
    case TLValue::InputMediaGeoPoint:
        d << "geoPoint:" << type.geoPoint;
        break;
    case TLValue::InputMediaContact:
        d << "phoneNumber:" << type.phoneNumber;
        d << "firstName:" << type.firstName;
        d << "lastName:" << type.lastName;
        break;
    case TLValue::InputMediaUploadedVideo:
        d << "file:" << type.file;
        d << "duration:" << type.duration;
        d << "w:" << type.w;
        d << "h:" << type.h;
        d << "mimeType:" << type.mimeType;
        d << "caption:" << type.caption;
        break;
    case TLValue::InputMediaUploadedThumbVideo:
        d << "file:" << type.file;
        d << "thumb:" << type.thumb;
        d << "duration:" << type.duration;
        d << "w:" << type.w;
        d << "h:" << type.h;
        d << "mimeType:" << type.mimeType;
        d << "caption:" << type.caption;
        break;
    case TLValue::InputMediaVideo:
        d << "idInputVeo:" << type.idInputVeo;
        d << "caption:" << type.caption;
        break;
    case TLValue::InputMediaUploadedAudio:
        d << "file:" << type.file;
        d << "duration:" << type.duration;
        d << "mimeType:" << type.mimeType;
        break;
    case TLValue::InputMediaAudio:
        d << "idInputAudio:" << type.idInputAudio;
        break;
    case TLValue::InputMediaUploadedDocument:
        d << "file:" << type.file;
        d << "mimeType:" << type.mimeType;
        d << "attributes:" << type.attributes;
        d << "caption:" << type.caption;
        break;
    case TLValue::InputMediaUploadedThumbDocument:
        d << "file:" << type.file;
        d << "thumb:" << type.thumb;
        d << "mimeType:" << type.mimeType;
        d << "attributes:" << type.attributes;
        d << "caption:" << type.caption;
        break;
    case TLValue::InputMediaDocument:
        d << "idInputDocument:" << type.idInputDocument;
        d << "caption:" << type.caption;
        break;
    case TLValue::InputMediaVenue:
        d << "geoPoint:" << type.geoPoint;
        d << "title:" << type.title;
        d << "address:" << type.address;
        d << "provider:" << type.provider;
        d << "venueId:" << type.venueId;
        break;
    case TLValue::InputMediaGifExternal:
        d << "url:" << type.url;
        d << "q:" << type.q;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputNotifyPeer &type)
{
    d << "TLInputNotifyPeer(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputNotifyPeer:
        d << "peer:" << type.peer;
        break;
    case TLValue::InputNotifyUsers:
        break;
    case TLValue::InputNotifyChats:
        break;
    case TLValue::InputNotifyAll:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLInputPrivacyRule &type)
{
    d << "TLInputPrivacyRule(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::InputPrivacyValueAllowContacts:
        break;
    case TLValue::InputPrivacyValueAllowAll:
        break;
    case TLValue::InputPrivacyValueAllowUsers:
        d << "users:" << type.users;
        break;
    case TLValue::InputPrivacyValueDisallowContacts:
        break;
    case TLValue::InputPrivacyValueDisallowAll:
        break;
    case TLValue::InputPrivacyValueDisallowUsers:
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLNotifyPeer &type)
{
    d << "TLNotifyPeer(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::NotifyPeer:
        d << "peer:" << type.peer;
        break;
    case TLValue::NotifyUsers:
        break;
    case TLValue::NotifyChats:
        break;
    case TLValue::NotifyAll:
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLPhoto &type)
{
    d << "TLPhoto(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::PhotoEmpty:
        d << "id:" << type.id;
        break;
    case TLValue::Photo:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        d << "date:" << type.date;
        d << "sizes:" << type.sizes;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLReplyMarkup &type)
{
    d << "TLReplyMarkup(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ReplyKeyboardHide:
        d << "flags:" << type.flags;
        d << "selective:" << type.selective();
        break;
    case TLValue::ReplyKeyboardForceReply:
        d << "flags:" << type.flags;
        d << "singleUse:" << type.singleUse();
        d << "selective:" << type.selective();
        break;
    case TLValue::ReplyKeyboardMarkup:
        d << "flags:" << type.flags;
        d << "resize:" << type.resize();
        d << "singleUse:" << type.singleUse();
        d << "selective:" << type.selective();
        d << "rows:" << type.rows;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLStickerSet &type)
{
    d << "TLStickerSet(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::StickerSet:
        d << "flags:" << type.flags;
        d << "installed:" << type.installed();
        d << "disabled:" << type.disabled();
        d << "official:" << type.official();
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        d << "title:" << type.title;
        d << "shortName:" << type.shortName;
        d << "count:" << type.count;
        d << "hash:" << type.hash;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLUser &type)
{
    d << "TLUser(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::UserEmpty:
        d << "id:" << type.id;
        break;
    case TLValue::User:
        d << "flags:" << type.flags;
        d << "self:" << type.self();
        d << "contact:" << type.contact();
        d << "mutualContact:" << type.mutualContact();
        d << "deleted:" << type.deleted();
        d << "bot:" << type.bot();
        d << "botChatHistory:" << type.botChatHistory();
        d << "botNochats:" << type.botNochats();
        d << "verified:" << type.verified();
        d << "restricted:" << type.restricted();
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        d << "firstName:" << type.firstName;
        d << "lastName:" << type.lastName;
        d << "username:" << type.username;
        d << "phone:" << type.phone;
        d << "photo:" << type.photo;
        d << "status:" << type.status;
        d << "botInfoVersion:" << type.botInfoVersion;
        d << "restrictionReason:" << type.restrictionReason;
        d << "botInlinePlaceholder:" << type.botInlinePlaceholder;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLAccountPrivacyRules &type)
{
    d << "TLAccountPrivacyRules(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::AccountPrivacyRules:
        d << "rules:" << type.rules;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLAuthAuthorization &type)
{
    d << "TLAuthAuthorization(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::AuthAuthorization:
        d << "user:" << type.user;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLChannelsChannelParticipant &type)
{
    d << "TLChannelsChannelParticipant(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ChannelsChannelParticipant:
        d << "participant:" << type.participant;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLChannelsChannelParticipants &type)
{
    d << "TLChannelsChannelParticipants(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ChannelsChannelParticipants:
        d << "count:" << type.count;
        d << "participants:" << type.participants;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLChat &type)
{
    d << "TLChat(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ChatEmpty:
        d << "id:" << type.id;
        break;
    case TLValue::Chat:
        d << "flags:" << type.flags;
        d << "creator:" << type.creator();
        d << "kicked:" << type.kicked();
        d << "left:" << type.left();
        d << "adminsEnabled:" << type.adminsEnabled();
        d << "admin:" << type.admin();
        d << "deactivated:" << type.deactivated();
        d << "id:" << type.id;
        d << "title:" << type.title;
        d << "photo:" << type.photo;
        d << "participantsCount:" << type.participantsCount;
        d << "date:" << type.date;
        d << "version:" << type.version;
        d << "migratedTo:" << type.migratedTo;
        break;
    case TLValue::ChatForbidden:
        d << "id:" << type.id;
        d << "title:" << type.title;
        break;
    case TLValue::Channel:
        d << "flags:" << type.flags;
        d << "creator:" << type.creator();
        d << "kicked:" << type.kicked();
        d << "left:" << type.left();
        d << "editor:" << type.editor();
        d << "moderator:" << type.moderator();
        d << "broadcast:" << type.broadcast();
        d << "verified:" << type.verified();
        d << "megagroup:" << type.megagroup();
        d << "restricted:" << type.restricted();
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        d << "title:" << type.title;
        d << "username:" << type.username;
        d << "photo:" << type.photo;
        d << "date:" << type.date;
        d << "version:" << type.version;
        d << "restrictionReason:" << type.restrictionReason;
        break;
    case TLValue::ChannelForbidden:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        d << "title:" << type.title;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLChatFull &type)
{
    d << "TLChatFull(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ChatFull:
        d << "id:" << type.id;
        d << "participants:" << type.participants;
        d << "chatPhoto:" << type.chatPhoto;
        d << "notifySettings:" << type.notifySettings;
        d << "exportedInvite:" << type.exportedInvite;
        d << "botInfo:" << type.botInfo;
        break;
    case TLValue::ChannelFull:
        d << "flags:" << type.flags;
        d << "canViewParticipants:" << type.canViewParticipants();
        d << "id:" << type.id;
        d << "about:" << type.about;
        d << "participantsCount:" << type.participantsCount;
        d << "adminsCount:" << type.adminsCount;
        d << "kickedCount:" << type.kickedCount;
        d << "readInboxMaxId:" << type.readInboxMaxId;
        d << "unreadCount:" << type.unreadCount;
        d << "unreadImportantCount:" << type.unreadImportantCount;
        d << "chatPhoto:" << type.chatPhoto;
        d << "notifySettings:" << type.notifySettings;
        d << "exportedInvite:" << type.exportedInvite;
        d << "botInfo:" << type.botInfo;
        d << "migratedFromChatId:" << type.migratedFromChatId;
        d << "migratedFromMaxId:" << type.migratedFromMaxId;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLChatInvite &type)
{
    d << "TLChatInvite(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ChatInviteAlready:
        d << "chat:" << type.chat;
        break;
    case TLValue::ChatInvite:
        d << "flags:" << type.flags;
        d << "channel:" << type.channel();
        d << "broadcast:" << type.broadcast();
        d << "isPublic:" << type.isPublic();
        d << "megagroup:" << type.megagroup();
        d << "title:" << type.title;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLConfig &type)
{
    d << "TLConfig(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::Config:
        d << "date:" << type.date;
        d << "expires:" << type.expires;
        d << "testMode:" << type.testMode;
        d << "thisDc:" << type.thisDc;
        d << "dcOptions:" << type.dcOptions;
        d << "chatSizeMax:" << type.chatSizeMax;
        d << "megagroupSizeMax:" << type.megagroupSizeMax;
        d << "forwardedCountMax:" << type.forwardedCountMax;
        d << "onlineUpdatePeriodMs:" << type.onlineUpdatePeriodMs;
        d << "offlineBlurTimeoutMs:" << type.offlineBlurTimeoutMs;
        d << "offlineIdleTimeoutMs:" << type.offlineIdleTimeoutMs;
        d << "onlineCloudTimeoutMs:" << type.onlineCloudTimeoutMs;
        d << "notifyCloudDelayMs:" << type.notifyCloudDelayMs;
        d << "notifyDefaultDelayMs:" << type.notifyDefaultDelayMs;
        d << "chatBigSize:" << type.chatBigSize;
        d << "pushChatPeriodMs:" << type.pushChatPeriodMs;
        d << "pushChatLimit:" << type.pushChatLimit;
        d << "savedGifsLimit:" << type.savedGifsLimit;
        d << "disabledFeatures:" << type.disabledFeatures;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLContactsBlocked &type)
{
    d << "TLContactsBlocked(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ContactsBlocked:
        d << "blocked:" << type.blocked;
        d << "users:" << type.users;
        break;
    case TLValue::ContactsBlockedSlice:
        d << "count:" << type.count;
        d << "blocked:" << type.blocked;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLContactsContacts &type)
{
    d << "TLContactsContacts(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ContactsContactsNotModified:
        break;
    case TLValue::ContactsContacts:
        d << "contacts:" << type.contacts;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLContactsFound &type)
{
    d << "TLContactsFound(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ContactsFound:
        d << "results:" << type.results;
        d << "chats:" << type.chats;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLContactsImportedContacts &type)
{
    d << "TLContactsImportedContacts(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ContactsImportedContacts:
        d << "imported:" << type.imported;
        d << "retryContacts:" << type.retryContacts;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLContactsLink &type)
{
    d << "TLContactsLink(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ContactsLink:
        d << "myLink:" << type.myLink;
        d << "foreignLink:" << type.foreignLink;
        d << "user:" << type.user;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLContactsResolvedPeer &type)
{
    d << "TLContactsResolvedPeer(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ContactsResolvedPeer:
        d << "peer:" << type.peer;
        d << "chats:" << type.chats;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLContactsSuggested &type)
{
    d << "TLContactsSuggested(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::ContactsSuggested:
        d << "results:" << type.results;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLDocument &type)
{
    d << "TLDocument(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::DocumentEmpty:
        d << "id:" << type.id;
        break;
    case TLValue::Document:
        d << "id:" << type.id;
        d << "accessHash:" << type.accessHash;
        d << "date:" << type.date;
        d << "mimeType:" << type.mimeType;
        d << "size:" << type.size;
        d << "thumb:" << type.thumb;
        d << "dcId:" << type.dcId;
        d << "attributes:" << type.attributes;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLFoundGif &type)
{
    d << "TLFoundGif(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::FoundGif:
        d << "url:" << type.url;
        d << "thumbUrl:" << type.thumbUrl;
        d << "contentUrl:" << type.contentUrl;
        d << "contentType:" << type.contentType;
        d << "w:" << type.w;
        d << "h:" << type.h;
        break;
    case TLValue::FoundGifCached:
        d << "url:" << type.url;
        d << "photo:" << type.photo;
        d << "document:" << type.document;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLHelpSupport &type)
{
    d << "TLHelpSupport(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::HelpSupport:
        d << "phoneNumber:" << type.phoneNumber;
        d << "user:" << type.user;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessageAction &type)
{
    d << "TLMessageAction(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessageActionEmpty:
        break;
    case TLValue::MessageActionChatCreate:
        d << "title:" << type.title;
        d << "users:" << type.users;
        break;
    case TLValue::MessageActionChatEditTitle:
        d << "title:" << type.title;
        break;
    case TLValue::MessageActionChatEditPhoto:
        d << "photo:" << type.photo;
        break;
    case TLValue::MessageActionChatDeletePhoto:
        break;
    case TLValue::MessageActionChatAddUser:
        d << "users:" << type.users;
        break;
    case TLValue::MessageActionChatDeleteUser:
        d << "userId:" << type.userId;
        break;
    case TLValue::MessageActionChatJoinedByLink:
        d << "inviterId:" << type.inviterId;
        break;
    case TLValue::MessageActionChannelCreate:
        d << "title:" << type.title;
        break;
    case TLValue::MessageActionChatMigrateTo:
        d << "channelId:" << type.channelId;
        break;
    case TLValue::MessageActionChannelMigrateFrom:
        d << "title:" << type.title;
        d << "chatId:" << type.chatId;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesAllStickers &type)
{
    d << "TLMessagesAllStickers(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessagesAllStickersNotModified:
        break;
    case TLValue::MessagesAllStickers:
        d << "hash:" << type.hash;
        d << "sets:" << type.sets;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesChatFull &type)
{
    d << "TLMessagesChatFull(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessagesChatFull:
        d << "fullChat:" << type.fullChat;
        d << "chats:" << type.chats;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesChats &type)
{
    d << "TLMessagesChats(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessagesChats:
        d << "chats:" << type.chats;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesFoundGifs &type)
{
    d << "TLMessagesFoundGifs(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessagesFoundGifs:
        d << "nextOffset:" << type.nextOffset;
        d << "results:" << type.results;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesSavedGifs &type)
{
    d << "TLMessagesSavedGifs(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessagesSavedGifsNotModified:
        break;
    case TLValue::MessagesSavedGifs:
        d << "hash:" << type.hash;
        d << "gifs:" << type.gifs;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesStickerSet &type)
{
    d << "TLMessagesStickerSet(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessagesStickerSet:
        d << "set:" << type.set;
        d << "packs:" << type.packs;
        d << "documents:" << type.documents;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesStickers &type)
{
    d << "TLMessagesStickers(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessagesStickersNotModified:
        break;
    case TLValue::MessagesStickers:
        d << "hash:" << type.hash;
        d << "stickers:" << type.stickers;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLPhotosPhoto &type)
{
    d << "TLPhotosPhoto(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::PhotosPhoto:
        d << "photo:" << type.photo;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLPhotosPhotos &type)
{
    d << "TLPhotosPhotos(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::PhotosPhotos:
        d << "photos:" << type.photos;
        d << "users:" << type.users;
        break;
    case TLValue::PhotosPhotosSlice:
        d << "count:" << type.count;
        d << "photos:" << type.photos;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLUserFull &type)
{
    d << "TLUserFull(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::UserFull:
        d << "user:" << type.user;
        d << "link:" << type.link;
        d << "profilePhoto:" << type.profilePhoto;
        d << "notifySettings:" << type.notifySettings;
        d << "blocked:" << type.blocked;
        d << "botInfo:" << type.botInfo;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLWebPage &type)
{
    d << "TLWebPage(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::WebPageEmpty:
        d << "id:" << type.id;
        break;
    case TLValue::WebPagePending:
        d << "id:" << type.id;
        d << "date:" << type.date;
        break;
    case TLValue::WebPage:
        d << "flags:" << type.flags;
        d << "id:" << type.id;
        d << "url:" << type.url;
        d << "displayUrl:" << type.displayUrl;
        d << "type:" << type.type;
        d << "siteName:" << type.siteName;
        d << "title:" << type.title;
        d << "description:" << type.description;
        d << "photo:" << type.photo;
        d << "embedUrl:" << type.embedUrl;
        d << "embedType:" << type.embedType;
        d << "embedWidth:" << type.embedWidth;
        d << "embedHeight:" << type.embedHeight;
        d << "duration:" << type.duration;
        d << "author:" << type.author;
        d << "document:" << type.document;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLBotInlineResult &type)
{
    d << "TLBotInlineResult(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::BotInlineMediaResultDocument:
        d << "id:" << type.id;
        d << "type:" << type.type;
        d << "document:" << type.document;
        d << "sendMessage:" << type.sendMessage;
        break;
    case TLValue::BotInlineMediaResultPhoto:
        d << "id:" << type.id;
        d << "type:" << type.type;
        d << "photo:" << type.photo;
        d << "sendMessage:" << type.sendMessage;
        break;
    case TLValue::BotInlineResult:
        d << "flags:" << type.flags;
        d << "id:" << type.id;
        d << "type:" << type.type;
        d << "title:" << type.title;
        d << "description:" << type.description;
        d << "url:" << type.url;
        d << "thumbUrl:" << type.thumbUrl;
        d << "contentUrl:" << type.contentUrl;
        d << "contentType:" << type.contentType;
        d << "w:" << type.w;
        d << "h:" << type.h;
        d << "duration:" << type.duration;
        d << "sendMessage:" << type.sendMessage;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessageMedia &type)
{
    d << "TLMessageMedia(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessageMediaEmpty:
        break;
    case TLValue::MessageMediaPhoto:
        d << "photo:" << type.photo;
        d << "caption:" << type.caption;
        break;
    case TLValue::MessageMediaVideo:
        d << "video:" << type.video;
        d << "caption:" << type.caption;
        break;
    case TLValue::MessageMediaGeo:
        d << "geo:" << type.geo;
        break;
    case TLValue::MessageMediaContact:
        d << "phoneNumber:" << type.phoneNumber;
        d << "firstName:" << type.firstName;
        d << "lastName:" << type.lastName;
        d << "userId:" << type.userId;
        break;
    case TLValue::MessageMediaUnsupported:
        break;
    case TLValue::MessageMediaDocument:
        d << "document:" << type.document;
        d << "caption:" << type.caption;
        break;
    case TLValue::MessageMediaAudio:
        d << "audio:" << type.audio;
        break;
    case TLValue::MessageMediaWebPage:
        d << "webpage:" << type.webpage;
        break;
    case TLValue::MessageMediaVenue:
        d << "geo:" << type.geo;
        d << "title:" << type.title;
        d << "address:" << type.address;
        d << "provider:" << type.provider;
        d << "venueId:" << type.venueId;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesBotResults &type)
{
    d << "TLMessagesBotResults(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessagesBotResults:
        d << "flags:" << type.flags;
        d << "gallery:" << type.gallery();
        d << "queryId:" << type.queryId;
        d << "nextOffset:" << type.nextOffset;
        d << "results:" << type.results;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessage &type)
{
    d << "TLMessage(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessageEmpty:
        d << "id:" << type.id;
        break;
    case TLValue::Message:
        d << "flags:" << type.flags;
        d << "unread:" << type.unread();
        d << "out:" << type.out();
        d << "mentioned:" << type.mentioned();
        d << "mediaUnread:" << type.mediaUnread();
        d << "id:" << type.id;
        d << "fromId:" << type.fromId;
        d << "toId:" << type.toId;
        d << "fwdFromId:" << type.fwdFromId;
        d << "fwdDate:" << type.fwdDate;
        d << "viaBotId:" << type.viaBotId;
        d << "replyToMsgId:" << type.replyToMsgId;
        d << "date:" << type.date;
        d << "message:" << type.message;
        d << "media:" << type.media;
        d << "replyMarkup:" << type.replyMarkup;
        d << "entities:" << type.entities;
        d << "views:" << type.views;
        break;
    case TLValue::MessageService:
        d << "flags:" << type.flags;
        d << "unread:" << type.unread();
        d << "out:" << type.out();
        d << "mentioned:" << type.mentioned();
        d << "mediaUnread:" << type.mediaUnread();
        d << "id:" << type.id;
        d << "fromId:" << type.fromId;
        d << "toId:" << type.toId;
        d << "date:" << type.date;
        d << "action:" << type.action;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesDialogs &type)
{
    d << "TLMessagesDialogs(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessagesDialogs:
        d << "dialogs:" << type.dialogs;
        d << "messages:" << type.messages;
        d << "chats:" << type.chats;
        d << "users:" << type.users;
        break;
    case TLValue::MessagesDialogsSlice:
        d << "count:" << type.count;
        d << "dialogs:" << type.dialogs;
        d << "messages:" << type.messages;
        d << "chats:" << type.chats;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLMessagesMessages &type)
{
    d << "TLMessagesMessages(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::MessagesMessages:
        d << "messages:" << type.messages;
        d << "chats:" << type.chats;
        d << "users:" << type.users;
        break;
    case TLValue::MessagesMessagesSlice:
        d << "count:" << type.count;
        d << "messages:" << type.messages;
        d << "chats:" << type.chats;
        d << "users:" << type.users;
        break;
    case TLValue::MessagesChannelMessages:
        d << "flags:" << type.flags;
        d << "pts:" << type.pts;
        d << "count:" << type.count;
        d << "messages:" << type.messages;
        d << "collapsed:" << type.collapsed;
        d << "chats:" << type.chats;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLUpdate &type)
{
    d << "TLUpdate(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::UpdateNewMessage:
        d << "message:" << type.message;
        d << "pts:" << type.pts;
        d << "ptsCount:" << type.ptsCount;
        break;
    case TLValue::UpdateMessageID:
        d << "id:" << type.id;
        d << "randomId:" << type.randomId;
        break;
    case TLValue::UpdateDeleteMessages:
        d << "messages:" << type.messages;
        d << "pts:" << type.pts;
        d << "ptsCount:" << type.ptsCount;
        break;
    case TLValue::UpdateUserTyping:
        d << "userId:" << type.userId;
        d << "action:" << type.action;
        break;
    case TLValue::UpdateChatUserTyping:
        d << "chatId:" << type.chatId;
        d << "userId:" << type.userId;
        d << "action:" << type.action;
        break;
    case TLValue::UpdateChatParticipants:
        d << "participants:" << type.participants;
        break;
    case TLValue::UpdateUserStatus:
        d << "userId:" << type.userId;
        d << "status:" << type.status;
        break;
    case TLValue::UpdateUserName:
        d << "userId:" << type.userId;
        d << "firstName:" << type.firstName;
        d << "lastName:" << type.lastName;
        d << "username:" << type.username;
        break;
    case TLValue::UpdateUserPhoto:
        d << "userId:" << type.userId;
        d << "date:" << type.date;
        d << "photo:" << type.photo;
        d << "previous:" << type.previous;
        break;
    case TLValue::UpdateContactRegistered:
        d << "userId:" << type.userId;
        d << "date:" << type.date;
        break;
    case TLValue::UpdateContactLink:
        d << "userId:" << type.userId;
        d << "myLink:" << type.myLink;
        d << "foreignLink:" << type.foreignLink;
        break;
    case TLValue::UpdateNewAuthorization:
        d << "authKeyId:" << type.authKeyId;
        d << "date:" << type.date;
        d << "device:" << type.device;
        d << "location:" << type.location;
        break;
    case TLValue::UpdateNewEncryptedMessage:
        d << "messageEncrypted:" << type.messageEncrypted;
        d << "qts:" << type.qts;
        break;
    case TLValue::UpdateEncryptedChatTyping:
        d << "chatId:" << type.chatId;
        break;
    case TLValue::UpdateEncryption:
        d << "chat:" << type.chat;
        d << "date:" << type.date;
        break;
    case TLValue::UpdateEncryptedMessagesRead:
        d << "chatId:" << type.chatId;
        d << "maxDate:" << type.maxDate;
        d << "date:" << type.date;
        break;
    case TLValue::UpdateChatParticipantAdd:
        d << "chatId:" << type.chatId;
        d << "userId:" << type.userId;
        d << "inviterId:" << type.inviterId;
        d << "date:" << type.date;
        d << "version:" << type.version;
        break;
    case TLValue::UpdateChatParticipantDelete:
        d << "chatId:" << type.chatId;
        d << "userId:" << type.userId;
        d << "version:" << type.version;
        break;
    case TLValue::UpdateDcOptions:
        d << "dcOptions:" << type.dcOptions;
        break;
    case TLValue::UpdateUserBlocked:
        d << "userId:" << type.userId;
        d << "blocked:" << type.blocked;
        break;
    case TLValue::UpdateNotifySettings:
        d << "peerNotify:" << type.peerNotify;
        d << "notifySettings:" << type.notifySettings;
        break;
    case TLValue::UpdateServiceNotification:
        d << "type:" << type.type;
        d << "messageQString:" << type.messageQString;
        d << "media:" << type.media;
        d << "popup:" << type.popup;
        break;
    case TLValue::UpdatePrivacy:
        d << "key:" << type.key;
        d << "rules:" << type.rules;
        break;
    case TLValue::UpdateUserPhone:
        d << "userId:" << type.userId;
        d << "phone:" << type.phone;
        break;
    case TLValue::UpdateReadHistoryInbox:
        d << "peer:" << type.peer;
        d << "maxId:" << type.maxId;
        d << "pts:" << type.pts;
        d << "ptsCount:" << type.ptsCount;
        break;
    case TLValue::UpdateReadHistoryOutbox:
        d << "peer:" << type.peer;
        d << "maxId:" << type.maxId;
        d << "pts:" << type.pts;
        d << "ptsCount:" << type.ptsCount;
        break;
    case TLValue::UpdateWebPage:
        d << "webpage:" << type.webpage;
        d << "pts:" << type.pts;
        d << "ptsCount:" << type.ptsCount;
        break;
    case TLValue::UpdateReadMessagesContents:
        d << "messages:" << type.messages;
        d << "pts:" << type.pts;
        d << "ptsCount:" << type.ptsCount;
        break;
    case TLValue::UpdateChannelTooLong:
        d << "channelId:" << type.channelId;
        break;
    case TLValue::UpdateChannel:
        d << "channelId:" << type.channelId;
        break;
    case TLValue::UpdateChannelGroup:
        d << "channelId:" << type.channelId;
        d << "group:" << type.group;
        break;
    case TLValue::UpdateNewChannelMessage:
        d << "message:" << type.message;
        d << "pts:" << type.pts;
        d << "ptsCount:" << type.ptsCount;
        break;
    case TLValue::UpdateReadChannelInbox:
        d << "channelId:" << type.channelId;
        d << "maxId:" << type.maxId;
        break;
    case TLValue::UpdateDeleteChannelMessages:
        d << "channelId:" << type.channelId;
        d << "messages:" << type.messages;
        d << "pts:" << type.pts;
        d << "ptsCount:" << type.ptsCount;
        break;
    case TLValue::UpdateChannelMessageViews:
        d << "channelId:" << type.channelId;
        d << "id:" << type.id;
        d << "views:" << type.views;
        break;
    case TLValue::UpdateChatAdmins:
        d << "chatId:" << type.chatId;
        d << "enabled:" << type.enabled;
        d << "version:" << type.version;
        break;
    case TLValue::UpdateChatParticipantAdmin:
        d << "chatId:" << type.chatId;
        d << "userId:" << type.userId;
        d << "isAdmin:" << type.isAdmin;
        d << "version:" << type.version;
        break;
    case TLValue::UpdateNewStickerSet:
        d << "stickerset:" << type.stickerset;
        break;
    case TLValue::UpdateStickerSetsOrder:
        d << "order:" << type.order;
        break;
    case TLValue::UpdateStickerSets:
        break;
    case TLValue::UpdateSavedGifs:
        break;
    case TLValue::UpdateBotInlineQuery:
        d << "queryId:" << type.queryId;
        d << "userId:" << type.userId;
        d << "query:" << type.query;
        d << "offset:" << type.offset;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLUpdates &type)
{
    d << "TLUpdates(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::UpdatesTooLong:
        break;
    case TLValue::UpdateShortMessage:
        d << "flags:" << type.flags;
        d << "unread:" << type.unread();
        d << "out:" << type.out();
        d << "mentioned:" << type.mentioned();
        d << "mediaUnread:" << type.mediaUnread();
        d << "id:" << type.id;
        d << "userId:" << type.userId;
        d << "message:" << type.message;
        d << "pts:" << type.pts;
        d << "ptsCount:" << type.ptsCount;
        d << "date:" << type.date;
        d << "fwdFromId:" << type.fwdFromId;
        d << "fwdDate:" << type.fwdDate;
        d << "viaBotId:" << type.viaBotId;
        d << "replyToMsgId:" << type.replyToMsgId;
        d << "entities:" << type.entities;
        break;
    case TLValue::UpdateShortChatMessage:
        d << "flags:" << type.flags;
        d << "unread:" << type.unread();
        d << "out:" << type.out();
        d << "mentioned:" << type.mentioned();
        d << "mediaUnread:" << type.mediaUnread();
        d << "id:" << type.id;
        d << "fromId:" << type.fromId;
        d << "chatId:" << type.chatId;
        d << "message:" << type.message;
        d << "pts:" << type.pts;
        d << "ptsCount:" << type.ptsCount;
        d << "date:" << type.date;
        d << "fwdFromId:" << type.fwdFromId;
        d << "fwdDate:" << type.fwdDate;
        d << "viaBotId:" << type.viaBotId;
        d << "replyToMsgId:" << type.replyToMsgId;
        d << "entities:" << type.entities;
        break;
    case TLValue::UpdateShort:
        d << "update:" << type.update;
        d << "date:" << type.date;
        break;
    case TLValue::UpdatesCombined:
        d << "updates:" << type.updates;
        d << "users:" << type.users;
        d << "chats:" << type.chats;
        d << "date:" << type.date;
        d << "seqStart:" << type.seqStart;
        d << "seq:" << type.seq;
        break;
    case TLValue::Updates:
        d << "updates:" << type.updates;
        d << "users:" << type.users;
        d << "chats:" << type.chats;
        d << "date:" << type.date;
        d << "seq:" << type.seq;
        break;
    case TLValue::UpdateShortSentMessage:
        d << "flags:" << type.flags;
        d << "unread:" << type.unread();
        d << "out:" << type.out();
        d << "id:" << type.id;
        d << "pts:" << type.pts;
        d << "ptsCount:" << type.ptsCount;
        d << "date:" << type.date;
        d << "media:" << type.media;
        d << "entities:" << type.entities;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLUpdatesChannelDifference &type)
{
    d << "TLUpdatesChannelDifference(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::UpdatesChannelDifferenceEmpty:
        d << "flags:" << type.flags;
        d << "final:" << type.final();
        d << "pts:" << type.pts;
        d << "timeout:" << type.timeout;
        break;
    case TLValue::UpdatesChannelDifferenceTooLong:
        d << "flags:" << type.flags;
        d << "final:" << type.final();
        d << "pts:" << type.pts;
        d << "timeout:" << type.timeout;
        d << "topMessage:" << type.topMessage;
        d << "topImportantMessage:" << type.topImportantMessage;
        d << "readInboxMaxId:" << type.readInboxMaxId;
        d << "unreadCount:" << type.unreadCount;
        d << "unreadImportantCount:" << type.unreadImportantCount;
        d << "messages:" << type.messages;
        d << "chats:" << type.chats;
        d << "users:" << type.users;
        break;
    case TLValue::UpdatesChannelDifference:
        d << "flags:" << type.flags;
        d << "final:" << type.final();
        d << "pts:" << type.pts;
        d << "timeout:" << type.timeout;
        d << "newMessages:" << type.newMessages;
        d << "otherUpdates:" << type.otherUpdates;
        d << "chats:" << type.chats;
        d << "users:" << type.users;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

QDebug operator<<(QDebug d, const TLUpdatesDifference &type)
{
    d << "TLUpdatesDifference(" << type.tlType.toString() << ") {";
    switch (type.tlType) {
    case TLValue::UpdatesDifferenceEmpty:
        d << "date:" << type.date;
        d << "seq:" << type.seq;
        break;
    case TLValue::UpdatesDifference:
        d << "newMessages:" << type.newMessages;
        d << "newEncryptedMessages:" << type.newEncryptedMessages;
        d << "otherUpdates:" << type.otherUpdates;
        d << "chats:" << type.chats;
        d << "users:" << type.users;
        d << "state:" << type.state;
        break;
    case TLValue::UpdatesDifferenceSlice:
        d << "newMessages:" << type.newMessages;
        d << "newEncryptedMessages:" << type.newEncryptedMessages;
        d << "otherUpdates:" << type.otherUpdates;
        d << "chats:" << type.chats;
        d << "users:" << type.users;
        d << "intermediateState:" << type.intermediateState;
        break;
    default:
        break;
    }
    d << "}";

    return d;
}

// End of generated TLTypes debug operators
