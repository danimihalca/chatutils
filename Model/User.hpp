#ifndef USER_H
 #define USER_H

 #include <string>
 #include <vector>

enum CONTACT_STATE
{
    OFFLINE,
    ONLINE
};

class BaseUser
{
public:
    inline const std::string& getUserName() const;
    inline void setUserName(const std::string& userName);

    inline std::string getFirstName() const;
    inline void setFirstName(const std::string& firstName);

    inline std::string getLastName() const;
    inline void setLastName(const std::string& lastName);

protected:
    BaseUser() = default;
    inline BaseUser(int                id,
                    const std::string& userName,
                    const std::string& firstName,
                    const std::string& lastName);

private:
    std::string m_userName;
    std::string m_firstName;
    std::string m_lastName;
    int id;

};

class UserCredentials
{
public:
    inline UserCredentials(const std::string& userName,
                           const std::string& password);

    inline const std::string& getUserName() const;
    inline void setUserName(const std::string& userName);

    inline const std::string& getPassword() const;
    inline void setPassword(const std::string& password);

private:
    std::string m_password;
    std::string m_userName;
};



class UserDetails
{
public:
    UserDetails() = default;
    inline UserDetails(int                id,
                       const std::string& firstName,
                       const std::string& lastName);

    inline void setId(int id);
    inline int getId() const;

    inline const std::string& getFirstName() const;
    inline void setFirstName(const std::string& firstName);

    inline const std::string& getLastName() const;
    inline void setLastName(const std::string& lastName);


private:
    int m_id;
    std::string m_firstName;
    std::string m_lastName;
};

class Contact : public BaseUser
{
public:
    Contact() = default;

    inline Contact(int                id,
                   const std::string& userName,
                   const std::string& firstName,
                   const std::string& lastName,
                   CONTACT_STATE      state);

    inline CONTACT_STATE getState() const;
    inline void setState(CONTACT_STATE state);

private:
    CONTACT_STATE m_state;
};

class User : public BaseUser
{
public:
    inline User(int                id,
                const std::string& userName,
                const std::string& password,
                const std::string& firstName,
                const std::string& lastName);

    inline const std::string& getPassword() const;
    inline void setPassword(const std::string& getPassword);

private:
    std::string m_password;

};

 #include "User.ipp"

#endif //USER_H
