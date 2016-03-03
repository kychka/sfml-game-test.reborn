#pragma once

#include "../../../../DVIZHOK/States/States.h"
#include "OnGroundState\OnGroundState.h"
#include "../../../../DVIZHOK/GameActors/Entity/Entity.h"
class PlayerStates : public States	
{
public:
	PlayerStates();
	~PlayerStates();


	// Унаследовано через States
	virtual void init() override;

};

