#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include <memory>
#include <map>
#include "../AbstractScreen/abstractScreen.h"
#include "../../MainGameClass/GameConfiguration.h"
#include "../Menu/pauseMenu.h"
#include "../Menu/StartMenu.h"
#include "../GameplayScreen/GameplayScreen.h"

class  ScreenManager
{

private:

	static std::map<std::string, std::shared_ptr<AbstractScreen> > screens;
	static std::shared_ptr<AbstractScreen>	currentScreen;
	
public :
	ScreenManager();
	~ScreenManager();

	static void setCurrentScreen(std::string name);

	static void handleInput(); // 	для будущих изменений
	static void update(float delta);
	static void draw();
	static void resize(int width, int height);	// 	для будущих изменений
	static void init(sf::RenderWindow &window, sf::Event &event);
	
};

