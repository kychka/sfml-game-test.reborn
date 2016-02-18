#include "GameplayScreen.h"






GameplayScreen::GameplayScreen(sf::RenderWindow &window, sf::Event &event) : 
	_window(window), _event(event)
{
	

	if (!texture.loadFromFile("sfml-game-test.reborn/Resourses/Explosion.png"))
	{
		std::cout << " download failed! ";
		exit(123);
	}
	// сoздаем анимацию 
	ExplosionAnim = std::make_shared<AnimationClass>(AnimationClass(texture, 4, 4, 1000.f, 0, 0, 64, 64));
	ExplosionAnim->setSize(256,256);
}


void GameplayScreen::handleInput(){
	// 	тут обработка событий окна
	if (_event.type == sf::Event::Closed)_window.close();
}

void GameplayScreen::update(float delta){
	
	ExplosionAnim->update(delta);
}

void GameplayScreen::draw(){
	
	ExplosionAnim->draw(200, 200,  _window);
}


GameplayScreen::~GameplayScreen(){

}
