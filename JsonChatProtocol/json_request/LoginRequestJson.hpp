#ifndef LOGINREQUESTJSON_HPP
#define LOGINREQUESTJSON_HPP

#include "Model/User.hpp"

class LoginRequestJson
{

public:
    LoginRequestJson() = default;

	const UserCredentials& getUserCredentials() const
    {
        return m_userCredentials;
    }
    void setUserCredentials(const UserCredentials& usercredentials)
    {
        m_userCredentials = usercredentials;
    }

private:
    UserCredentials m_userCredentials;
};

#endif // LOGINREQUESTJSON_HPP









