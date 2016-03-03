#pragma once
#include <SFML/Graphics.hpp>

class  AbstractScreen
{
public:

	
	
	AbstractScreen() {};	// �����  ����������
   
	virtual void handleInput() = 0;
	virtual void update(float delta) = 0;
	virtual void draw() = 0;
	virtual ~AbstractScreen() {}
};

