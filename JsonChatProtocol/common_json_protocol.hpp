#ifndef COMMON_JSON_PROTOCOL_H
#define COMMON_JSON_PROTOCOL_H

enum REQUEST_ACTION_TYPE
{
    REQUEST_LOGIN = 0x100,
    REQUEST_SEND_MESSAGE,
    REQUEST_GET_CONTACTS,
};

enum RESPONSE_ACTION_TYPE
{
    RESPONSE_LOGIN = 0x200,
    RESPONSE_SEND_MESSAGE,
    RESPONSE_CONTACT_UPDATED,
    RESPONSE_CONTACT_STATE_CHANGED,
    RESPONSE_GET_CONTACTS
};

enum AUTH_STATUS
{
    AUTH_SUCCESSFUL = 0,
    AUTH_ALREADY_LOGGED_IN,
    AUTH_INVALID_CREDENTIALS
};


const char* const REQUEST_ACTION = "request_action";
const char* const RESPONSE_ACTION = "response_action";

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


#endif // COMMON_JSON_PROTOCOL_H

