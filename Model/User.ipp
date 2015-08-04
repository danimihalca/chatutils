#include "User.hpp"

const std::string& AbstractUser::getUserName() const
{
    return m_userName;
}

void AbstractUser::setUserName(const std::string& userName)
{
    m_userName = userName;
}

AbstractUser::AbstractUser(const std::string& userName) :
    m_userName(userName)
{
}


UserCredentials::UserCredentials(const std::string& userName, const std::string& password) :
    AbstractUser(userName),
    m_password(password)
{
}

const std::string& UserCredentials::getPassword() const
{
    return m_password;
}

void UserCredentials::setPassword(const std::string& password)
{
    m_password = password;
}


UserDetails::UserDetails(int id, const std::string& fullName) :
    m_id(id),
    m_fullName(fullName)
{
}

int UserDetails::getId() const
{
    return m_id;
}

const std::string& UserDetails::getFullName() const
{
    return m_fullName;
}

void UserDetails::setFullName(const std::string& fullName)
{
    m_fullName = fullName;
}


Contact::Contact(int id, const std::string& userName, const std::string& fullName):
    Contact(id,userName,fullName,false)
{
}

Contact::Contact(int id, const std::string& userName, const std::string& fullName, bool isOnline) :
    AbstractUser(userName),
    m_details(id, fullName),
    m_isOnline(isOnline)
{
}

bool Contact::isOnline() const
{
    return m_isOnline;
}

void Contact::setOnline(bool isOnline)
{
    m_isOnline = isOnline;
}

const UserDetails& Contact::getDetails() const
{
    return m_details;
}

void Contact::setDetails(const UserDetails& details)
{
    m_details = details;
}



const UserCredentials& User::getUserCredentials() const
{
    return m_userCredentials;
}

void User::setUserCredentials(const UserCredentials& userCredentials)
{
    m_userCredentials = userCredentials;
}

const UserDetails& User::getUserDetails() const
{
    return m_userDetails;
}

void User::setUserDetails(const UserDetails& userDetails)
{
    m_userDetails = userDetails;
}
