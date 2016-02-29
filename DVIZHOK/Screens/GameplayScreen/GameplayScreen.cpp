#include "GameplayScreen.h"






GameplayScreen::GameplayScreen(sf::RenderWindow &window, sf::Event &event) : 
	_window(window), _event(event)
{
	

	player = Player(200, 190);
	player.setCurrentAnimation(Entity::ANIM_JUMP);
	// ТУТ Я ПОТЕСТИЛ АНИМАЦИЮ.		

	// сoздаем анимацию 
	//ExplosionAnim = std::make_shared<AnimationClass>(AnimationClass(texture, 4, 4, 1000.f, 0, 0, 64, 64));
	//ExplosionAnim->setSize(256,256);
}


void GameplayScreen::handleInput(){
	// 	тут обработка событий окна
	if (_event.type == sf::Event::Closed)_window.close();
}

void GameplayScreen::update(float delta){
	player.update(delta);
}

void GameplayScreen::draw(){
	player.draw(_window);
}


GameplayScreen::~GameplayScreen(){

}
