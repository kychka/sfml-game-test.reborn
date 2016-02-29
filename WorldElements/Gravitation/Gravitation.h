#pragma once

#include "../../"
class Gravitation
{
public:
			 
	Gravitation(float gravity);
	~Gravitation();

	void applyGravity(Entity &actor, float time);
};

