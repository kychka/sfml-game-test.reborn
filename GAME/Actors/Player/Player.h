#pragma once

#include "../../../DVIZHOK/GameActors/Entity/Entity.h"
#include "PlayerStates\PlayerStates.h"
#include "PlayerAnimations\PlayerAnimations.h"
#include "../../../DVIZHOK/Animation/BagForAnimations/Animations.h"	
class Player : public Entity
	
{

private:
	PlayerStates states;
	PlayerAnimations animations;

public:
	Player();
	Player(float x, float y);
	~Player();

	// Унаследовано через Entity
	virtual void setSize(float width, float height) override;
	virtual void flip(bool flipX, bool flipY) override;
	virtual std::shared_ptr<IAnimation> getCurrentAnimation() override;
	virtual void setCurrentState(int state) override;
	virtual void setCurrentAnimation(int anim) override;
	virtual void handleInput(float time) override;
	virtual void update(float time) override;
	virtual void draw( RenderWindow &window) override;
};

