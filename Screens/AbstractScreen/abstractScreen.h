#pragma once
#include <SFML/Graphics.hpp>
class  AbstractScreen
{
public:

	//AbstractScreen(){}   // может потом пригодится
	virtual void handleInput() = 0;
	virtual void update() = 0;
	virtual void draw() = 0;
	virtual ~AbstractScreen() {}
};

