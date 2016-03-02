#include "PlayerStates.h"



PlayerStates::PlayerStates()
{	
}

PlayerStates::~PlayerStates()
{
}

void PlayerStates::init()
{
	states.emplace( Entity::ON_GROUND_STATE, std::make_shared<OnGroundState>() );
}
