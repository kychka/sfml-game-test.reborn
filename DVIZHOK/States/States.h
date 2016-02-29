#pragma once

#include "IState/IState.h"
#include <memory>
#include <map>	 

class States
{	
protected:

	  
	std::map<int, std::shared_ptr<IState> > states;

public:
	States();

	virtual void init() = 0; 
	std::shared_ptr<IState> get(int state);

	virtual ~States();
};

