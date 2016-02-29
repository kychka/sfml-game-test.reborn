#include "States.h"



States::States()
{
	
}

std::shared_ptr<IState> States::get(int state)
{
	auto it = states.find(state);
	if (it != states.end())
	{
		return states.at(state);
	}
	else
	{
		return nullptr;
	}
}


States::~States()
{
}
