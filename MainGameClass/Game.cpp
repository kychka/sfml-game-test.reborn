#include "Game.h"

#include <iostream>




Game::Game(GameConfiguration &config){

	sf::Uint32 style = config.fullscreen ? sf::Style::Fullscreen : sf::Style::Close;
	window.create(sf::VideoMode(config.width, config.height), config.window_title, style);
	window.setFramerateLimit(config.frameRate);

	ScreenManager::init(window, event);
}

void Game::runGame(){
	
	while ( window.isOpen() ) {

		 handleInput();
		 update();
		 draw();
	}
	
}



void Game::handleInput(){


}

void Game::update(){

}

void Game::draw(){

	window.clear();
	ScreenManager::draw();
	window.display();
	
}


void Game::computeDelta(){
	//delta = clock.getElapsedTime().asMicroseconds();
}

Game::~Game(){
	
}
