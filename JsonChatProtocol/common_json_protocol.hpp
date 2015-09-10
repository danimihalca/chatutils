#ifndef COMMON_JSON_PROTOCOL_H
#define COMMON_JSON_PROTOCOL_H

enum ACTION_TYPE
{
    ACTION_LOGIN = 0x100,
    ACTION_SEND_MESSAGE,
    ACTION_GET_CONTACTS,
    ACTION_ADD_CONTACT,
    ACTION_ADD_CONTACT_RESOLUTION,
    ACTION_REMOVE_CONTACT,
    ACTION_CHANGE_STATE,
    ACTION_REGISTER_USER,
    ACTION_UPDATE_USER
};

enum NOTIFICATION_TYPE
{
    NOTIFICATION_LOGIN = 0x200,
    NOTIFICATION_SEND_MESSAGE,
    NOTIFICATION_CONTACT_UPDATED,
    NOTIFICATION_CONTACT_STATE_CHANGED,
    NOTIFICATION_GET_CONTACTS,
    NOTIFICATION_ADD_REQUEST,
    NOTIFICATION_ADD_CONTACT_RESPONSE,
    NOTIFICATION_REMOVE_CONTACT,
    NOTIFICATION_REGISTER_UPDATE_USER
};

enum AUTH_STATUS
{
    AUTH_SUCCESSFUL = 0,
    AUTH_ALREADY_LOGGED_IN,
    AUTH_INVALID_CREDENTIALS,
    AUTH_INVALID_STATE
};

enum ADD_STATUS
{
    ADD_ACCEPTED,
    ADD_DECLINED,
    ADD_OFFLINE,
    ADD_INEXISTENT,
    ADD_YOURSELF
};

enum REGISTER_UPDATE_USER_STATUS
{
    USER_OK = 0,
    USER_EXISTING_USERNAME ,
    USER_INVALID_INPUT
};

const char* const ACTION = "action";
const char* const NOTIFICATION = "notification";

const char* const CONTENT = "content";

const char* const USER = "user";
const char* const USER_CREDENTIALS = "user_credentials";
const char* const USER_DETAILS = "user_details";
const char* const CONTACT ="contact";
const char* const CONTACTS ="contacts";

const char* const ID= "id";
const char* const USERNAME = "username";
const char* const PASSWORD = "password";
const char* const FIRSTNAME = "firstname";
const char* const LASTNAME = "lastname";

const char* const STATE = "state";

const char* const AUTHENTICATION_STATUS = "auth_status";

const char* const MESSAGE = "message";
const char* const RECEIVER_ID= "receiver_id";
const char* const SENDER_ID= "sender_id";
const char* const MESSAGE_TEXT= "message_text";

const char* const ADD_REQUEST_STATUS = "add_request_status";
const char* const ACCEPTED = "accepted";

const char* const REGISTER_UPDATE_STATUS = "user_status";

#endif // COMMON_JSON_PROTOCOL_H

