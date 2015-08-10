#ifndef CONTACTSTATECHANGEDJSON_HPP
#define CONTACTSTATECHANGEDJSON_HPP

#include "IResponseJson.hpp"

#include "Model/User.hpp"

class ContactStateChangedJson: public IResponseJson
{

public:
    ContactStateChangedJson() = default;

    int getContactId() const
    {
        return m_contactId;
    }
    void setContactId(int contactId)
    {
        m_contactId = contactId;
    }

    CONTACT_STATE getContactState() const
    {
        return m_state;
    }
    void setContactState(const CONTACT_STATE& state)
    {
        m_state = state;
    }

private:
    int m_contactId;
    CONTACT_STATE m_state;
};

#endif // CONTACTSTATECHANGEDJSON_HPP









