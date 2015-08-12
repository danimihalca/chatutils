#ifndef ADDINGBYCONTACTJSON_HPP
#define ADDINGBYCONTACTJSON_HPP

#include <string>

class AddingByContactJson
{
public:
        AddingByContactJson() = default;
        inline AddingByContactJson(const std::string& userName) :
                m_userName(userName)
        {
        }

        const std::string& getUserName() const
        {
                return m_userName;
        }

private:
        std::string m_userName;
};

#endif //ADDINGBYCONTACTJSON_HPP
