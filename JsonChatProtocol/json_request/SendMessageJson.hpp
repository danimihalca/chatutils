#ifndef SENDMESSAGEJSON_HPP
#define SENDMESSAGEJSON_HPP

#include <Model/Message.hpp>

class SendMessageJson
{
public:
	 SendMessageJson() = default;

	 const Message& getMessage() const
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

#endif //SENDMESSAGEJSON_HPP