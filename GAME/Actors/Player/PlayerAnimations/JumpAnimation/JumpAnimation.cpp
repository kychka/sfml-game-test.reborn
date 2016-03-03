#include "JumpAnimation.h"



JumpAnimation::JumpAnimation()
{

	if (!texture.loadFromFile("sfml-game-test.reborn/DVIZHOK/Resourses/Explosion.png"))
	{
		exit(123456);
	}
	jump = AnimationClass(texture, 4, 4, 1.f, 0, 0, 64, 64);
}


JumpAnimation::~JumpAnimation()
{
}

void JumpAnimation::flip(bool flipX, bool flipY)
{
	jump.flip(flipX, flipY);
}

void JumpAnimation::setSize(float width, float height)
{
	jump.setSize(width, height);
}

void JumpAnimation::update(float deltaTime)
{
	jump.update(deltaTime);
}

void JumpAnimation::draw(float posX, float posY, sf::RenderWindow &window)
{
	jump.draw(posX, posY, window);
}
