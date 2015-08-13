#include "User.hpp"



BaseUser::BaseUser(int                id,
                   const std::string& userName,
                   const std::string& firstName,
                   const std::string& lastName) :
    m_id(id),
    m_userName(userName),
    m_firstName(firstName),
    m_lastName(lastName)
{
}


int BaseUser::getId() const
{
    return m_id;
}

void BaseUser::setId(int id)
{
    m_id = id;
}

const std::string& BaseUser::getUserName() const
{
    return m_userName;
}

void BaseUser::setUserName(const std::string& userName)
{
    m_userName = userName;
}

std::string BaseUser::getFirstName() const
{
    return m_firstName;
}

void BaseUser::setFirstName(const std::string& firstName)
{
    m_firstName = firstName;
}

std::string BaseUser::getLastName() const
{
    return m_lastName;
}

void BaseUser::setLastName(const std::string& lastName)
{
    m_lastName = lastName;
}





UserCredentials::UserCredentials(const std::string& userName,
                                 const std::string& password) :
    m_userName(userName),
    m_password(password)
{
}

const std::string&UserCredentials::getUserName() const
{
    return m_userName;
}

void UserCredentials::setUserName(const std::string& userName)
{
    m_userName = userName;
}

const std::string& UserCredentials::getPassword() const
{
    return m_password;
}

void UserCredentials::setPassword(const std::string& password)
{
    m_password = password;
}


UserDetails::UserDetails(int                id,
                         const std::string& firstName,
                         const std::string& lastName) :
    m_id(id),
    m_firstName(firstName),
    m_lastName(lastName)
{
}

void UserDetails::setId(int id)
{
    m_id = id;
}

int UserDetails::getId() const
{
    return m_id;
}

const std::string& UserDetails::getLastName() const
{
    return m_lastName;
}

void UserDetails::setLastName(const std::string& lastName)
{
    m_lastName = lastName;
}
const std::string& UserDetails::getFirstName() const
{
    return m_firstName;
}

void UserDetails::setFirstName(const std::string& firstName)
{
    m_firstName = firstName;
}


Contact::Contact(const BaseUser& baseUser, USER_STATE state):
	BaseUser(baseUser),
	m_state(state)
{
}


Contact::Contact(int                id,
                 const std::string& userName,
                 const std::string& firstName,
                 const std::string& lastName,
                 USER_STATE      state) :
    BaseUser(id,userName,firstName,lastName),
    m_state(state)
{
}

USER_STATE Contact::getState() const
{
    return m_state;
}

void Contact::setState(USER_STATE state)
{
    m_state = state;
}



User::User(int                id,
           const std::string& userName,
           const std::string& password,
           const std::string& firstName,
           const std::string& lastName) :
    BaseUser(id,userName,firstName,lastName),
    m_password(password)
{
}

const std::string& User::getPassword() const
{
    return m_password;
}

void User::setPassword(const std::string& password)
{
    m_password = password;
}
