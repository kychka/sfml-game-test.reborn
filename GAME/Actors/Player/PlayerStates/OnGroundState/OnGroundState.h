#pragma once

#include "../../../../../DVIZHOK/States/IState/IState.h"
#include "../../../../../DVIZHOK/GameActors/Entity/Entity.h"
class Entity;

class OnGroundState	 : public IState
{
public:
	OnGroundState();
	~OnGroundState();

	// Унаследовано через IState
	virtual void update(Entity &actor, float time) override;
};

