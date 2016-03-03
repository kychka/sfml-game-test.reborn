#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include "GameConfiguration.h"
#include "../Screens/ScreenManager/ScreenManager.h"
#include<iostream>
using namespace sf;


		  


class Game
{
private:

	sf::RenderWindow window;
	sf::Event event;		 // ��� �������� 
	Clock clock;		 //			    �����������
	float delta;

	void computeDelta();

	void handleInput();
	void update();
	void draw();
	
public:

	Game(GameConfiguration &config);

	void  runGame();

	~Game();
};

