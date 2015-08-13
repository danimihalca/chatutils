#ifndef LOGINREQUESTJSON_HPP
#define LOGINREQUESTJSON_HPP

#include "Model/User.hpp"

class LoginRequestJson
{

public:
    LoginRequestJson() = default;
	
	LoginRequestJson(const UserCredentials& userCred, USER_STATE state):
		m_userCredentials(userCred),
		m_state(state)
	{
	}

	const UserCredentials& getUserCredentials() const
    {
        return m_userCredentials;
    }

	USER_STATE getState() const
	{
		return m_state;
	}

private:
    UserCredentials m_userCredentials;
	USER_STATE m_state;
};

#endif // LOGINREQUESTJSON_HPP









