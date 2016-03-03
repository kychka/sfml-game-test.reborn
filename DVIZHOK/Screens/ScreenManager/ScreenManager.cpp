#include "ScreenManager.h"
#include <iostream>

   // � ����  �������, ����� draw �������� ���� �������
 // ��������� ������ � ���������, ������� ������ ��������� �� �����������.
// ���� ��� ���������� ������ � startMenu � pauseMenu
	
std::map<std::string, std::shared_ptr<AbstractScreen> > ScreenManager::screens ;
std::shared_ptr<AbstractScreen> ScreenManager::currentScreen = nullptr;

ScreenManager::ScreenManager(){
	
}

 /* �������� ��������� ��� ����� ������� ����������, ����� ������ �� ��������� */
void ScreenManager::setCurrentScreen(std::string name){
	// ��������� �� �����
	currentScreen = screens.at(name);
}

void ScreenManager::init(sf::RenderWindow &window, sf::Event &event){

	//��������� ������
	screens.emplace("pauseMenu", std::make_shared<pauseMenu>(window, event) );
	screens.emplace("startMenu", std::make_shared<startMenu>(window, event) );
	screens.emplace("gameplay" ,  std::make_shared<GameplayScreen>(window, event) );

	setCurrentScreen("startMenu");
}

void ScreenManager::handleInput(){

	currentScreen->handleInput();
}
	
void ScreenManager::update(float delta){
	// d

	
	currentScreen->update(delta);
}

void ScreenManager::draw(){

	currentScreen->draw();
}

void ScreenManager::resize(int width, int height){

			 // ����������
}



ScreenManager::~ScreenManager(){
	
}


