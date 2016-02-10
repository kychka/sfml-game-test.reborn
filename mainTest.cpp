#include <SFML/Graphics.hpp>
#include "MainGameClass/Game.h"
#include "Screens/StartMenu/StartMenu.h"
#include "Entity/Hero.h"
#include <iostream>
using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 640), "SFML works!");
	
	//Создание персонажа//
	Image hero_image;
	hero_image.loadFromFile("resources/images/megaman.png");
	Hero hero;
	hero.setHeroPosition(250, 150);
	hero.drawEntity(hero_image, 28, 55);

	Clock clock;
	float time;

	while (window.isOpen())
	{
		time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time/1200;		

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		hero.update(time);
		//cout <<"X ="<< hero.getHeroPosition().x << endl;
		//cout <<"Y =" << hero.getHeroPosition().y << endl;

		window.clear();
		window.draw(hero.sprite);
		window.display();
	}

	return 0;
}