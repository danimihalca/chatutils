#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class AbstractUser
{
public:
    inline const std::string& getUserName() const;
    inline void setUserName(const std::string& userName);

protected:
    AbstractUser() = default;
    inline AbstractUser(const std::string& userName);
private:
    std::string m_userName;
};

class UserCredentials : public AbstractUser
{
public:
    UserCredentials() = default;
    inline UserCredentials(const std::string& userName,
                           const std::string& password);

    inline const std::string& getPassword() const;
    inline void setPassword(const std::string& password);

private:
    std::string m_password;
};



class UserDetails
{
public:
    UserDetails() = default;
    inline UserDetails(int id, const std::string& fullName);
    inline int getId() const;

    inline const std::string& getFullName() const;
    inline void setFullName(const std::string& fullName);

private:
    int m_id;
    std::string m_fullName;
};

class Contact : public AbstractUser
{
public:
    Contact() = default;
    inline Contact(int                id,
                   const std::string& userName,
                   const std::string& fullName);

    inline Contact(int                id,
                   const std::string& userName,
                   const std::string& fullName,
                   bool               isOnline);

    inline bool isOnline() const;
    inline void setOnline(bool isOnline);

    inline const UserDetails& getDetails() const;
    inline void setDetails(const UserDetails& details);

private:
    UserDetails m_details;
    bool m_isOnline;
};

typedef std::vector<Contact> Contacts;

class User
{
public:

    inline const UserCredentials& getUserCredentials() const;
    inline void setUserCredentials(const UserCredentials& userCredentials);

    inline const UserDetails& getUserDetails() const;
    inline void setUserDetails(const UserDetails& userDetails);

private:
    UserCredentials m_userCredentials;
    UserDetails m_userDetails;
};

#include "User.ipp"

#endif //USER_H
