#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

#include "../sfml-game-test.reborn/DVIZHOK/MainGameClass/Game.h"
#include "../sfml-game-test.reborn/DVIZHOK/Screens/Menu/pauseMenu.h"
#include "../sfml-game-test.reborn/DVIZHOK/Screens/Menu/StartMenu.h"
#include "../sfml-game-test.reborn/DVIZHOK/Animation/IAnimation.h"
#include "../sfml-game-test.reborn/DVIZHOK/Animation/AnimationClass.h"

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