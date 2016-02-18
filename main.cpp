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
	

	// все ,что ниже - только для теста 
/*	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
	Texture texture;

	window.setFramerateLimit(60);
	if (!texture.loadFromFile("sfml-game-test.reborn/Resourses/Explosion.png"))
	{	   
		std::cout << " download failed! ";
		exit(123);
	}	 
	 
	//startMenu menu(window);
	
	std::shared_ptr<IAnimation> ExplosionAnim(new AnimationClass(texture, 4, 4, 2000.f, 0, 0, 64, 64));
	ExplosionAnim->setSize(132, 132);
	sf::Event event;
	  Clock clock;
	  while (window.isOpen())
	  {

		  float time = clock.getElapsedTime().asMicroseconds() / 800.f;
		  clock.restart();
		  while (window.pollEvent(event))
		  {
			  // Close window : exit
			  if (event.type == sf::Event::Closed)
				  window.close();

			  if (event.type == Event::KeyPressed) {
				  if (event.key.code == Keyboard::D) {

				  }
			  }
		  }

		//  menu.runMenu();

		  window.clear(Color(123,123,213,132));

		  ExplosionAnim->update(time);
		  ExplosionAnim->draw(150, 200, window);
		  window.display();
	  }		*/	  
	return 0;
}