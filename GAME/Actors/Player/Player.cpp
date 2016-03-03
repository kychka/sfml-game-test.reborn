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
	shape.setSize(Vector2f(width,height) );
	
	// доделать эти методы
	for (std::shared_ptr<IAnimation> anim : animations.getAll())
	{
		anim->setSize(width, height);
	}
}

void Player::flip(bool flipX, bool flipY)
{
}

std::shared_ptr<IAnimation> Player::getCurrentAnimation()
{
	return currentAnimation;
}


void Player::setCurrentState(int state)
{
	currentState = states.get(state);
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
	currentState->update(*this,time);
	currentAnimation->update(time);
}

void Player::draw(RenderWindow &window)
{
	window.draw(shape);
	currentAnimation->draw(position.x, position.y, window);
}
