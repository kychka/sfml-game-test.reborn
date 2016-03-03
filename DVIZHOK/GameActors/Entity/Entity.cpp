#include "Entity.h"

Entity::Entity()
{
	position.x = 0;
	position.y = 0;
	velocity.x = 0;
	velocity.y = 0;
	rectangle.left = 0;
	rectangle.top = 0;
	rectangle.width = 0;
	rectangle.height = 0;
	
	shape.setPosition(0, 0);
	shape.setSize(Vector2f(0, 0));
}

Entity::Entity(float x, float y)
{
	position.x = x;
	position.y = y;	
	velocity.x = 0;
	velocity.y = 0;
	
	rectangle.left = x;
	rectangle.top = y;
	rectangle.width = 0;
	rectangle.height = 0;
	
	
	shape.setPosition(x, y);
	shape.setFillColor(Color(112,23,190,132));
	shape.setSize(Vector2f(0,0));
}


Entity::~Entity()
{
}

void Entity::setPosition(float x, float y)
{
	position.x = x;
	position.y = y;
	rectangle.left = x;
	rectangle.top = y;
	shape.setPosition(x, y);
}

void Entity::setPosition(Vector2f &pos)
{
	position = pos;
	rectangle.left = pos.x;
	rectangle.top = pos.y;
	shape.setPosition(pos);
}

void Entity::setVelocity(float vx, float vy)
{
	velocity.x = vx;
	velocity.y = vy;
}

void Entity::setVelocity(Vector2f &vel)
{
	velocity = vel;
}

void Entity::setVelX(float vx)
{
	velocity.x = vx;
}

void Entity::setVelY(float vy)
{
	velocity.y = vy;
}

Vector2f& Entity::getPosition()
{
	return position;
}

Vector2f& Entity::getVelocity()
{
	return velocity;
}

FloatRect& Entity::getRect()
{
	return rectangle;
}
