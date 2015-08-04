#ifndef MESSAGE_HPP
 #define MESSAGE_HPP

 #include "User.hpp"

class Message
{
public:
    Message() = default;

    inline Message(const std::string& message);
    inline Message(int senderId, const std::string& message);
    inline Message(const std::string& message, int receiverId);
    inline Message(int senderId, const std::string& message, int receiverId);

    inline int getSenderId() const;
    inline void setSenderId(int senderId);

    inline int getReceiverId() const;
    inline void setReceiverId(int receiverId);

    inline const std::string& getMessageText() const;
    inline void setMessageText(const std::string& messageText);

private:
    int m_senderId;
    int m_receiverId;
    std::string m_messageText;
};

 #include "Message.ipp"
#endif
