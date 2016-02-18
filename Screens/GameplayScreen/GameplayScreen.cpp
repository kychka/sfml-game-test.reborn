#include "GameplayScreen.h"






GameplayScreen::GameplayScreen(sf::RenderWindow &window, sf::Event &event) : 
	_window(window), _event(event)
{
	

	if (!texture.loadFromFile("sfml-game-test.reborn/Resourses/Explosion.png"))
	{
		std::cout << " download failed! ";
		exit(123);
	}
	ExplosionAnim = std::make_shared<AnimationClass>(AnimationClass(texture, 4, 4, 2000.f, 0, 0, 64, 64));
	ExplosionAnim->setSize(256,256);
}


void GameplayScreen::handleInput(){
	if (_event.type == sf::Event::Closed)_window.close();
}

void GameplayScreen::update(float delta){

}

void GameplayScreen::draw(){
	
	float time = clock.getElapsedTime().asMicroseconds() / 800.f;
	clock.restart();
	ExplosionAnim->update(time);
	ExplosionAnim->draw(200, 200,  _window);
	std::cout << "hello there" << std::endl;
}


GameplayScreen::~GameplayScreen(){

}
