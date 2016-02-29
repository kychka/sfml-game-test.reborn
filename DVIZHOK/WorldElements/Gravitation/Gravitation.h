#pragma once

#include "../../GameActors/Entity/Entity.h"
class Gravitation
{
public:
			 
	Gravitation(float gravity);
	~Gravitation();

	void applyGravity(Entity &actor, float time);
};

