#include "PlayerAnimations.h"



PlayerAnimations::PlayerAnimations()
{
}


PlayerAnimations::~PlayerAnimations()
{
}

void PlayerAnimations::init()
{
	animations.emplace( Entity::ANIM_JUMP, std::make_shared<JumpAnimation>() );
}
