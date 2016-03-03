#include "GameplayScreen.h"






GameplayScreen::GameplayScreen(sf::RenderWindow &window, sf::Event &event) : 
	_window(window), _event(event)
{
	
	level.LoadFromFile("sfml-game-test.reborn/DVIZHOK/WorldElements/maps/level.tmx");
	
	pl = level.GetObject("player");

	player = Player(pl.rect.left, pl.rect.top);
	player.setSize(128, 128);
	player.setCurrentAnimation(Entity::ANIM_JUMP);
	player.setCurrentState(Entity::ON_GROUND_STATE);
	
}


void GameplayScreen::handleInput()
{
	// 	тут обработка событий окна
	if (_event.type == sf::Event::Closed)_window.close();
	
	if (Keyboard::isKeyPressed(Keyboard::Escape)) 
	{
		//
		ScreenManager::setCurrentScreen("startMenu");	// проверка перехода
	}
	
}

void GameplayScreen::update(float delta)  // апдейтим 
{
	player.update(delta);
}

void GameplayScreen::draw()	   // рисуем
{
	_window.draw(level);
	player.draw(_window);
}


GameplayScreen::~GameplayScreen()	
{

}
