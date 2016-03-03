#pragma once

#include "../../../../DVIZHOK/Animation/BagForAnimations/Animations.h"
#include "../../../../DVIZHOK/GameActors/Entity/Entity.h"
#include "../../../../GAME/Actors/Player/PlayerAnimations/JumpAnimation/JumpAnimation.h"
class PlayerAnimations	: public Animations
{
public:
	PlayerAnimations();
	~PlayerAnimations();

	// Унаследовано через Animations
	virtual void init() override;
};

