Message::Message(const std::string& message) :
    Message(-1,message,-1)
{
}

Message::Message(int senderId, const std::string& message) :
    Message(senderId,message,-1)
{
}

Message::Message(const std::string& message, int receiverId) :
    Message(-1,message,receiverId)
{
}

Message::Message(int senderId, const std::string& message, int receiverId) :
    m_senderId(senderId),
    m_messageText(message),
    m_receiverId(receiverId)
{
}
int Message::getSenderId() const
{
    return m_senderId;
}

void Message::setSenderId(int senderId)
{
    m_senderId = senderId;
}
int Message::getReceiverId() const
{
    return m_receiverId;
}

void Message::setReceiverId(int receiverId)
{
    m_receiverId = receiverId;
}
const std::string& Message::getMessageText() const
{
    return m_messageText;
}

void Message::setMessageText(const std::string& messageText)
{
    m_messageText = messageText;
}
