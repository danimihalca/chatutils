#ifndef ADDCONTACTRESPONSEJSON_HPP
#define ADDCONTACTRESPONSEJSON_HPP

#include <string>

class AddContactResponseJson
{
public:
        AddContactResponseJson() = default;
        inline AddContactResponseJson(const std::string& userName, bool accepted) :
                m_userName(userName),
                m_accepted(accepted)
        {
        }

        const std::string& getUserName() const
        {
                return m_userName;
        }

        bool hasAccepted() const
        {
                return m_accepted;
        }

private:
        std::string m_userName;
        bool m_accepted;
};

#endif //ADDCONTACTRESPONSEJSON_HPP
