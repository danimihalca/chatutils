#ifndef REMOVECONTACTJSON_HPP
#define REMOVECONTACTJSON_HPP

#include <string>

class RemoveContactJson
{
public:
	RemoveContactJson() = default;
	inline RemoveContactJson(int contactId) :
		m_contactId(contactId)
	{
	}

	const int getContactId()
	{
		return m_contactId;
	}

private:
	int m_contactId;
};

#endif //REMOVECONTACTJSON_HPP