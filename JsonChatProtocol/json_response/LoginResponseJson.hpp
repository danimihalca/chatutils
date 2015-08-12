#ifndef LOGINRESPONSEJSON_HPP
#define LOGINRESPONSEJSON_HPP


#include "JsonChatProtocol/common_json_protocol.hpp"

#include <Model/User.hpp>

class LoginResponseJson
{
public:
    LoginResponseJson() = default;

    AUTH_STATUS getAutheticationStatus() const
    {
        return m_autheticationStatus;
    }
    void setAutheticationStatus(const AUTH_STATUS& autheticationStatus)
    {
        m_autheticationStatus = autheticationStatus;
    }

    UserDetails getUserDetails() const
    {
        return m_userDetails;
    }
    void setUserDetails(const UserDetails& userDetails)
    {
        m_userDetails = userDetails;
    }

private:
    AUTH_STATUS m_autheticationStatus;
    UserDetails m_userDetails;
};

#endif // LOGINRESPONSEJSON_HPP









