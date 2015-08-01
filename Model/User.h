#ifndef USER_H
#define USER_H

#include <string>

class AbstractUser
{
public:
    const std::string& getUserName() const
    {
        return m_userName;
    }
    void setUserName(const std::string& userName)
    {
        m_userName = userName;
    }

protected:
    AbstractUser() = default;
    AbstractUser(const std::string& userName) :
        m_userName(userName)
    {
    }
private:
    std::string m_userName;
};

class UserCredentials : public AbstractUser
{
public:
    UserCredentials(const std::string& userName, const std::string& password) :
        AbstractUser(userName),
        m_password(password)
    {
    }

    const std::string& getPassword() const
    {
        return m_password;
    }
    void setPassword(const std::string& password)
    {
        m_password = password;
    }

private:
    std::string m_password;
};



class UserDetails
{
public:
    UserDetails() = default;
    UserDetails(int id, const std::string& fullName) :
        m_id(id),
        m_fullName(fullName)
    {
    }
    int getId() const
    {
        return m_id;
    }

    const std::string& getFullName() const
    {
        return m_fullName;
    }
    void setFullName(const std::string& fullName)
    {
        m_fullName = fullName;
    }

private:
    int m_id;
    std::string m_fullName;
};

class Contact : public AbstractUser
{
public:
    Contact(int                id,
            const std::string& userName,
            const std::string& fullName,
            bool               isOnline) :
        AbstractUser(userName),
        m_details(id, fullName),
        m_isOnline(isOnline)
    {
    }

    bool isOnline() const
    {
        return m_isOnline;
    }
    void setOnline(bool isOnline)
    {
        m_isOnline = isOnline;
    }

    const UserDetails& getDetails() const
    {
        return m_details;
    }
    void setDetails(const UserDetails& details)
    {
        m_details = details;
    }

private:
    UserDetails m_details;
    bool m_isOnline;
};

class User
{
public:

    const UserCredentials& getUserCredentials() const
    {
        return m_userCredentials;
    }
    void setUserCredentials(const UserCredentials& userCredentials)
    {
        m_userCredentials = userCredentials;
    }

    const UserDetails& getUserDetails() const
    {
        return m_userDetails;
    }
    void setUserDetails(const UserDetails& userDetails)
    {
        m_userDetails = userDetails;
    }

private:
    UserCredentials m_userCredentials;
    UserDetails m_userDetails;
};


































#endif //USER_H




