#include <SFML/Graphics.hpp>
#include "MainGameClass/Game.h"
#include "Screens/Menu/StartMenu.h"
#include "Screens/Menu/pauseMenu.h"
int main()
{
	

	/*new Game().run();*/
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
			   // все ,что ниже - только для теста


//	startMenu menu(window);
	pauseMenu  pauseMenu(window);
	while (window.isOpen())
	{
			
		
//		menu.runMenu();
		pauseMenu.runMenu();
	}							  

	return 0;
}