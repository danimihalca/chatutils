#ifndef RECEIVEMESSAGEJSON_HPP
#define RECEIVEMESSAGEJSON_HPP

#include "IResponseJson.hpp"

#include <Model/Message.hpp>

class ReceiveMessageJson: public IResponseJson
{
public:
    ReceiveMessageJson() = default;

    Message getMessage() const
    {
        return m_message;
    }
    void setMessage(const Message& message)
    {
        m_message = message;
    }

private:
    Message m_message;
};

#endif // RECEIVEMESSAGEJSON_HPP
