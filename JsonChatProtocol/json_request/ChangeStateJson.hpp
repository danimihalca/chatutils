#ifndef CHANGESTATEJSON_HPP
#define CHANGESTATEJSON_HPP

#include "Model/User.hpp"

class ChangeStateJson
{

public:
	ChangeStateJson() = default;

	ChangeStateJson(USER_STATE state) :
    m_state(state)
    {
    }

    USER_STATE getNewState() const
    {
        return m_state;
    }

private:
    USER_STATE m_state;
};

#endif // CHANGESTATEJSON_HPP









