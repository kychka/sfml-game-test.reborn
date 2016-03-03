#pragma once

#include "../../../../../DVIZHOK/Animation/IAnimation.h"
#include "../../../../../DVIZHOK/Animation/AnimationClass.h"
class JumpAnimation	: public IAnimation
{
private:

	sf::Texture texture;
	AnimationClass jump;

public:

	  
	JumpAnimation();
	~JumpAnimation();

	// ������������ ����� IAnimation
	virtual void flip(bool flipX, bool flipY) override;
	virtual void setSize(float width, float height) override;
	virtual void update(float deltaTime) override;
	virtual void draw(float posX, float posY, sf::RenderWindow & window) override;
};

