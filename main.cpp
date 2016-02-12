#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include "MainGameClass/Game.h"

#include "Screens/Menu/StartMenu.h"
#include "Animation/IAnimation.h"
#include "Animation/AnimationClass.h"
using namespace sf;


#include "Screens/Menu/pauseMenu.h"

int main()
{
				  
	/* new Game().run(); */		
	

	// все ,что ниже - только для теста 
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
	Texture texture;
	if (!texture.loadFromFile("sfml-game-test.reborn/Resourses/Explosion.png"))
	{
		std::cout << " download failed! ";
		exit(123);
	}	 

	 window.setFramerateLimit(60);
	IAnimation *ExplosionAnimation = new AnimationClass(texture, 4, 4, 2000.f, 0, 0, 64, 64);

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

		  //menu.runMenu();

		  window.clear();

		  ExplosionAnimation->update(time);
		  ExplosionAnimation->draw(150.f, 150.f, window);
		  window.display();
	  }
	return 0;
}