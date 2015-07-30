#ifndef COMMON_JSON_PROTOCOL_H
#define COMMON_JSON_PROTOCOL_H

enum ChatClient_Action_Type
{
    CC_LOGIN_REQUEST = 0,
    CC_SEND_MESSAGE,
    CC_GET_CONTACTS_REQUEST,
    CC_MESSAGE_DELIVERED
};

enum ChatServer_Action_Type
{
    CS_LOGIN_RESPONSE = 0,
    CS_CONTACT_LOGGED_IN,
    CS_CONTACT_LOGGED_OUT,
    CS_SEND_MESSAGE,
    CS_GET_CONTACTS_RESPONSE
};

enum Authentification_Status
{
    AUTH_OK = 0,
    AUTH_ALREADY_LOGGED_IN,
    AUTH_FAILED
};

const char* const ACTION = "action";

const char* const USER = "user";
const char* const USERNAME = "username";
const char* const PASSWORD = "password";

const char* const FULLNAME = "fullname";

const char* const AUTHENTIFICATION_STATUS = "auth_status";


#endif // COMMON_JSON_PROTOCOL_H

