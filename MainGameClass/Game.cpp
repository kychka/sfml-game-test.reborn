#include "Game.h"
#include <SFML/Graphics.hpp>


Game::Game(Configuration &config)
{
	sf::Uint32 style = config.fullscreen ? sf::Style::Fullscreen : sf::Style::Close;
	window = new RenderWindow(sf::VideoMode(config.width, config.height), config.window_title, style);
}

void Game::runGame()
{
	while (window->isOpen()) {

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
	window->clear(Color(0, 231, 0, 133));
	window->display();
}




Game::~Game()
{
	delete window;
}
