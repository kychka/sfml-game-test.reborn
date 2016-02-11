#pragma once
#include <SFML/Graphics.hpp>
class IAnimation
{
public:

	virtual void flip(bool flipX, bool flipY) = 0;
	virtual void setSize(int width, int height) = 0;
	virtual void update(float deltaTime) = 0;
	virtual	void draw(float posX, float posY, sf::RenderWindow &window) = 0;
	virtual  ~IAnimation() {} 
};

