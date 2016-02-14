#include "Game.h"
#include "../Screens/Menu/StartMenu.h"
#include <SFML/Graphics.hpp>


Game::Game(Configuration &config)
{
	sf::Uint32 style = config.fullscreen ? sf::Style::Fullscreen : sf::Style::Close;
	window = new RenderWindow(sf::VideoMode(config.width, config.height), config.window_title, style);
}

void Game::runGame()
{
	startMenu menu(*window);

	while (window->isOpen()) {
		menu.draw();
		 handleInput();
		 update();
		draw();
	}
	
}



void Game::handleInput()
{
	while (window->pollEvent(event)) {

		if (event.type == Event::Closed) window->close();
	}
}

void Game::update()
{
}

void Game::draw()
{
	window->clear(Color(0, 168, 0, 133));
	window->display();
}


void Game::computeDelta()
{

}

Game::~Game()
{
	delete window;
}
