#include "GameplayScreen.h"






GameplayScreen::GameplayScreen(sf::RenderWindow &window, sf::Event &event) : 
	_window(window), _event(event)
{
	

	player = Player(200, 190);
	player.setSize(128, 128);
	player.setCurrentAnimation(Entity::ANIM_JUMP);
	player.setCurrentState(Entity::ON_GROUND_STATE);
	
}


void GameplayScreen::handleInput()
{
	// 	тут обработка событий окна
	if (_event.type == sf::Event::Closed)_window.close();
}

void GameplayScreen::update(float delta)
{
	player.update(delta);
}

void GameplayScreen::draw()
{
	player.draw(_window);
}


GameplayScreen::~GameplayScreen()
{

}
