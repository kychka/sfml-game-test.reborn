#pragma once

#include "../../../../DVIZHOK/States/States.h"
#include "OnGroundState\OnGroundState.h"
#include "../../../../DVIZHOK/GameActors/Entity/Entity.h"
class PlayerStates : public States	
{
public:
	PlayerStates();
	~PlayerStates();


	// ������������ ����� States
	virtual void init() override;

};

