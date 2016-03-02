#include "OnGroundState.h"

  #include <iostream>

OnGroundState::OnGroundState()
{

	grav = Gravitation(9.8);
	
}

OnGroundState::~OnGroundState(){}

void OnGroundState::update(Entity &actor, float time)
{
	grav.applyGravity(actor, time);
}
