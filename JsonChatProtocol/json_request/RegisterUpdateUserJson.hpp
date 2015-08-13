#ifndef REGISTERUPDATEUSERJSON_HPP
#define REGISTERUPDATEUSERJSON_HPP

#include <JsonChatProtocol/common_json_protocol.hpp>

class RegisterUpdateUserJson
{
public:
    RegisterUpdateUserJson() = default;

    RegisterUpdateUserJson(User user):
        m_user(user)
    {
    }


    inline const User& getUser() const
    {
        return m_user;
    }

private:
    User m_user;

};


#endif // REGISTERUPDATEUSERJSON_HPP





