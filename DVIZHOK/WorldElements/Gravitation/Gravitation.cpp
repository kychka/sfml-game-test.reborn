#include "Gravitation.h"

#include <iostream>


Gravitation::Gravitation()
{
	GRAVITY = 4.9f;
}

Gravitation::Gravitation(float gravity)
{
	GRAVITY = gravity;
}

Gravitation::~Gravitation()
{
}

void Gravitation::applyGravity(Entity &actor, float time)
{

	Vector2f &speed = actor.getVelocity();
	Vector2f &pos = actor.getPosition();

	if(pos.y < 444)actor.setVelY(speed.y+GRAVITY);	// иф для теста
	actor.setVelY(speed.y*time);
	actor.setPosition(pos.x, pos.y + speed.y);
	actor.setVelY(speed.y * (1 / time));	
	if (pos.y > 444)
	{
		actor.setPosition(pos.x, 444);
	}

	std::cout << "actorPos = " 
			  << actor.getPosition().y 	<< " "
			  << "gravity = " << GRAVITY << " "
			  << "time = " << time << " "

				<< std::endl;		   
}

void Gravitation::setGravity(float grav)
{
	GRAVITY = grav;
}
