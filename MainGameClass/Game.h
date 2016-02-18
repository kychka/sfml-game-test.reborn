#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include "GameConfiguration.h"
#include "../Screens/ScreenManager/ScreenManager.h"
using namespace sf;





class Game
{
private:

	sf::RenderWindow window;
	sf::Event event;		 // для будущего 
	Clock clock;		 //			    функционала
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

