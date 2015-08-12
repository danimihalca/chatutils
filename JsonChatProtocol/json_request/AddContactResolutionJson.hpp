#ifndef ADDCONTACTRESOLUTIONJSON_HPP
#define ADDCONTACTRESOLUTIONJSON_HPP

#include <string>

class AddContactResolutionJson
{
public:
	AddContactResolutionJson() = default;
	inline AddContactResolutionJson(const std::string& userName, bool accepted) :
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

#endif //ADDCONTACTRESOLUTIONJSON_HPP