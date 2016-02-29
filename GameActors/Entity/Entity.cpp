#include "Entity.h"



Entity::Entity(float x, float y)
{
	position.x = x;
	position.y = y;
	rectangle.left = x;
	rectangle.top = y;
	rectangle.width = 0;
	rectangle.height = 0;
	currentAnimation = std::make_shared<IAnimation>(nullptr);
}


Entity::~Entity()
{
}

void Entity::setPosition(float x, float y)
{

}

void Entity::setPosition(Vector2f & pos)
{
}

void Entity::setVelocity(float vx, float vy)
{
}

void Entity::setVelocity(Vector2f & vel)
{
}

void Entity::setVelX(float vx)
{
}

void Entity::setVelY(float vy)
{
}

Vector2f Entity::getPosition()
{
	return position;
}

Vector2f Entity::getVelocity()
{
	return velocity;
}

FloatRect Entity::getRect()
{
	return rectangle;
}
