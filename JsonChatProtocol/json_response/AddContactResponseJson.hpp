#ifndef ADDCONTACTRESPONSEJSON_HPP
#define ADDCONTACTRESPONSEJSON_HPP

#include <string>

#include <JsonChatProtocol/common_json_protocol.hpp>

class AddContactResponseJson
{
public:
        AddContactResponseJson() = default;
        inline AddContactResponseJson(const std::string& userName, ADD_STATUS status) :
                m_userName(userName),
                m_status(status)
        {
        }

        const std::string& getUserName() const
        {
                return m_userName;
        }

        ADD_STATUS getStatus() const
        {
                return m_status;
        }

private:
        std::string m_userName;
        ADD_STATUS m_status;
};

#endif //ADDCONTACTRESPONSEJSON_HPP
