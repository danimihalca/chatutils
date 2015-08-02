#ifndef COMMON_JSON_PROTOCOL_H
#define COMMON_JSON_PROTOCOL_H

enum Chat_Action_Type
{
    LOGIN_REQUEST = 0x1000,
    SEND_MESSAGE_REQUEST,
    GET_CONTACTS_REQUEST,

    LOGIN_RESPONSE = 0x2000,
    CONTACT_UPDATED,
    CONTACT_LOGGED_IN,
    CONTACT_LOGGED_OUT,
    SEND_MESSAGE_RESPONSE,
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

const char* const USER_ID= "id";
const char* const USER_USERNAME = "username";
const char* const USER_PASSWORD = "password";
const char* const USER_FULLNAME = "fullname";

const char* const AUTHENTICATION_STATUS = "auth_status";


#endif // COMMON_JSON_PROTOCOL_H

