#include "ScreenManager.h"
#include <iostream>

   // в коде  экранов, метод draw вызывает цепь событий
 // обработки логики и отрисовки, которые нельзя запускать по отдельности.
// пока так происходит только в startMenu и pauseMenu
	
std::map<std::string, std::shared_ptr<AbstractScreen> > ScreenManager::screens ;
std::shared_ptr<AbstractScreen> ScreenManager::currentScreen = nullptr;

ScreenManager::ScreenManager(){
	
}

 /* осталось наполнить код сдесь всякими провеками, чтобы ничего не сломалось */
void ScreenManager::setCurrentScreen(std::string name){
	// переходим на экран
	currentScreen = screens.at(name);
}

void ScreenManager::init(sf::RenderWindow &window, sf::Event &event){

	//добавляем экраны
	screens.emplace("pauseMenu", std::make_shared<pauseMenu>(window, event) );
	screens.emplace("startMenu", std::make_shared<startMenu>(window, event) );
	screens.emplace("gameplay", std::make_shared<GameplayScreen>(window, event) );

	setCurrentScreen("pauseMenu");
}

void ScreenManager::handleInput(){

	currentScreen->handleInput();
}
	
void ScreenManager::update(float delta){
	// delta пока бездействует
	currentScreen->update(delta);
}

void ScreenManager::draw(){

	currentScreen->draw();
}

void ScreenManager::resize(int width, int height){

			 // пригодится
}



ScreenManager::~ScreenManager(){
	
}


