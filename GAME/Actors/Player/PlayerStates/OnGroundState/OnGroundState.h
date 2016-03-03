#pragma once

#include "../../../../../DVIZHOK/States/IState/IState.h"
#include "../../../../../DVIZHOK/GameActors/Entity/Entity.h"
#include "../../../../../DVIZHOK/WorldElements/Gravitation/Gravitation.h"
//#include "../../../../..
//#include "../../../../..
//#include "../../../../..

class Entity;

class OnGroundState	 : public IState
{

private:

	Gravitation grav;

public:
	OnGroundState();
	~OnGroundState();

	// Унаследовано через IState
	virtual void update(Entity &actor, float time) override;
};

