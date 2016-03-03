#pragma once

#include "../../GameActors/Entity/Entity.h"
class Gravitation
{

private:
	float GRAVITY;

public:
		
	Gravitation();
	Gravitation(float gravity);
	~Gravitation();

	void applyGravity(Entity &actor, float time);
	void setGravity(float grav);
};

