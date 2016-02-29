#pragma once

#include <SFML\Graphics.hpp>
#include "../Animation/IAnimation.h"
//#include ""
#include <memory>
using namespace sf;

class Entity
{

protected:
	Vector2f position;
	Vector2f velocity;
	FloatRect rectangle;
	std::shared_ptr<IAnimation> currentAnimation;
	//std::shared_ptr<IState>	currentState;

public:
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

	virtual IAnimation getCurrentAnimation() = 0;
	virtual void setCurrentState(int state) = 0;
	virtual void setCurrentAnimation(int anim) = 0;

	virtual void handleInput(float time) = 0;
	virtual void update(float time) = 0;
	virtual void draw(RenderWindow &window) = 0;
};

