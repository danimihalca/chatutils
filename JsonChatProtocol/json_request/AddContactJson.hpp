#ifndef ADDCONTACTJSON_HPP
#define ADDCONTACTJSON_HPP

#include <string>

class AddContactJson
{
public:
	AddContactJson() = default;
	inline AddContactJson(const std::string& userName) :
		m_userName(userName)
	{
	}
	
	const std::string& getUserName()
	{
		return m_userName;
	}

private:
	std::string m_userName;
};

#endif //ADDCONTACTJSON_HPP