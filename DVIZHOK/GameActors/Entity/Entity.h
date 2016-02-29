#ifndef ENTITY_H
#define ENTITY_H


#include "../../States/IState/IState.h"
#include <SFML/Graphics.hpp>
#include "../../Animation/IAnimation.h"

#include <memory>

using namespace sf;

class IState;



class Entity
{

protected:

	

	Vector2f position;
	Vector2f velocity;
	FloatRect rectangle;
	RectangleShape shape;	  
	std::shared_ptr<IState> currentState;
	std::shared_ptr<IAnimation> currentAnimation;
	

public:				  

	 static const int ON_GROUND_STATE = 0;
	 static const int IN_AIR_STATE = 1;
	
	 static const int ANIM_WALK = 0;
	 static const int ANIM_JUMP = 1;
	 static const int ANIM_FALL = 2;
	 static const int ANIM_STAND = 3;

	Entity();
	Entity(float x, float y);
	virtual ~Entity();
	void setPosition(float x, float y);
	void setPosition(Vector2f &pos);
	void setVelocity(float vx, float vy);
	void setVelocity(Vector2f &vel);
	void setVelX(float vx);
	void setVelY(float vy);
	Vector2f getPosition();
	Vector2f getVelocity();
	FloatRect getRect();

	virtual void setSize(float width, float height) = 0;
	virtual void flip(bool flipX, bool flipY) = 0;

	virtual std::shared_ptr<IAnimation> getCurrentAnimation() = 0;
	virtual void setCurrentState(int state) = 0;
	virtual void setCurrentAnimation(int anim) = 0;

	virtual void handleInput(float time) = 0;
	virtual void update(float time) = 0;
	virtual void draw(RenderWindow &window) = 0;
};

#endif // !ENTITY_H