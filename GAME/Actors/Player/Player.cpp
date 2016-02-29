#include "Player.h"



Player::Player()
{
}

Player::Player(float x, float y) : Entity(x, y)
{
	states.init();
	animations.init();
}


Player::~Player()
{
}

void Player::setSize(float width, float height)
{
	// доделать эти методы
}

void Player::flip(bool flipX, bool flipY)
{
}

std::shared_ptr<IAnimation> Player::getCurrentAnimation()
{
	return std::shared_ptr<IAnimation>();
}



void Player::setCurrentState(int state)
{

}

void Player::setCurrentAnimation(int anim)
{
	currentAnimation = animations.get(anim);
}

void Player::handleInput(float time)
{

}

void Player::update(float time)
{
	currentAnimation->update(time);
}

void Player::draw(RenderWindow & window)
{
	currentAnimation->draw(position.x, position.y, window);
}
