#ifndef COMMON_JSON_PROTOCOL_H
#define COMMON_JSON_PROTOCOL_H

enum REQUEST_ACTION_TYPE
{
    REQUEST_LOGIN = 0x100,
    REQUEST_SEND_MESSAGE,
    REQUEST_GET_CONTACTS,
    REQUEST_ADD_CONTACT,
    REQUEST_ADD_CONTACT_RESOLUTION,
    REQUEST_REMOVE_CONTACT,
    REQUEST_CHANGE_STATE,
    REQUEST_REGISTER_USER,
    REQUEST_UPDATE_USER
};

enum RESPONSE_ACTION_TYPE
{
    RESPONSE_LOGIN = 0x200,
    RESPONSE_SEND_MESSAGE,
    RESPONSE_CONTACT_UPDATED,
    RESPONSE_CONTACT_STATE_CHANGED,
    RESPONSE_GET_CONTACTS,
    RESPONSE_ADD_CONTACT,
    RESPONSE_ADD_CONTACT_RESOLUTION,
    RESPONSE_REMOVE_CONTACT,
    RESPONSE_REGISTER_UPDATE_USER
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
    USER_INVALID_INPUT ,
//    USER_REGISTER_LOGGED_IN
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

const char* const ADD_REQUEST_STATUS = "add_request_status";
const char* const ACCEPTED = "accepted";

const char* const REGISTER_UPDATE_STATUS = "user_status";

#endif // COMMON_JSON_PROTOCOL_H

