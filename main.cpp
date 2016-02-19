#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <memory>
#include "MainGameClass/Game.h"
#include "Screens/Menu/pauseMenu.h"
#include "Screens/Menu/StartMenu.h"
#include "Animation/IAnimation.h"
#include "Animation/AnimationClass.h"

using namespace sf;




int main()
{
	
	GameConfiguration config;
	config.width = 1024;
	config.height = 612;
	config.frameRate = 60;
	config.fullscreen = false;
	config.window_title = "Alpha_Project_OnTesting";

	Game game(config);
	game.runGame();

	return 0;
}