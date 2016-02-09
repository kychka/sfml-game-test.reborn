#include <SFML/Graphics.hpp>
#include "MainGameClass/Game.h"
#include "Screens/StartMenu/StartMenu.h"
int main()
{
	
	/* new Game().run(); */
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
			   // все ,что ниже - только для теста !!!-!
	startMenu menu(window);
	while (window.isOpen())
	{
			
		menu.menuControl();
		menu.runMenu();
	}							  

	return 0;
}