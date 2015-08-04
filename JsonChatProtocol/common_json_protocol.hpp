#ifndef COMMON_JSON_PROTOCOL_H
#define COMMON_JSON_PROTOCOL_H

enum Chat_Action_Type
{
    LOGIN_REQUEST = 0x100,
    SEND_MESSAGE,
    GET_CONTACTS_REQUEST,

    LOGIN_RESPONSE = 0x200,
    CONTACT_UPDATED,
    CONTACT_LOGGED_IN,
    CONTACT_LOGGED_OUT,
    RECEIVE_MESSAGE,
    GET_CONTACTS_RESPONSE
};

enum Authentication_Status
{
    AUTH_SUCCESSFUL = 0,
    AUTH_ALREADY_LOGGED_IN,
    AUTH_INVALID_CREDENTIALS
};

const char* const ACTION = "action";

const char* const USER = "user";
const char* const USER_CREDENTIALS = "user_credentials";
const char* const USER_DETAILS = "user_details";
const char* const CONTACT ="contact";
const char* const CONTACTS ="contacts";

const char* const USER_ID= "id";
const char* const USER_USERNAME = "username";
const char* const USER_PASSWORD = "password";
const char* const USER_FULLNAME = "fullname";

const char* const CONTACT_ONLINE = "online";

const char* const AUTHENTICATION_STATUS = "auth_status";

const char* const MESSAGE = "message";
const char* const MESSAGE_RECEIVER_ID= "receiver_id";
const char* const MESSAGE_SENDER_ID= "sender_id";
const char* const MESSAGE_TEXT= "message_text";


#endif // COMMON_JSON_PROTOCOL_H

