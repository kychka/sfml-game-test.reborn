#include <SFML\Graphics.hpp>
#include <iostream>
#include "Entity\Hero.h"
#include "Entity\CamView.h"
//#include "level\Level.hpp"
using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 640), "SFML works!");
	
	//Карта//
	lv::Level lvl;
	lvl.LoadFromFile("Resourses/maps/level.tmx");
	lv::Object Player = lvl.GetObject("player");//пока хитбокса нет, эта строчка висит без дела)

	//Создание персонажа//
	Image hero_image;
	hero_image.loadFromFile("Resourses/images/megaman.png");

	Hero hero(lvl);
	hero.drawEntity(hero_image, 0, 210, 28, 55);
	hero.createHitBox(28, 35);
	hero.setHitBoxPosition(Player.rect.top, Player.rect.left);
	//hero.setHeroPosition(250, 150);

	///Камера слежения за персонажем///
	CamView heroCam(window, lvl, hero);	

	Clock clock;
	//float time;

	while (window.isOpen())
	{
		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time/1000;		

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == Event::KeyPressed){
				if (event.key.code == sf::Keyboard::Escape) {
					window.close();
				}
			}
		}

		hero.update(time);
		heroCam.updateCam();
		cout <<"X ="<< hero.getHitBoxPosition().x << endl;
		cout <<"Y =" << hero.getHitBoxPosition().y << endl;

		window.clear(Color(155, 215, 235));
		window.draw(lvl);
		window.draw(hero);
		window.display();
	}

	return 0;
}