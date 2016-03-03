#pragma once
#include "../AbstractScreen/abstractScreen.h"
#include <iostream>
#include "../../Animation/AnimationClass.h"
#include "../../../GAME/Actors/Player/Player.h"
#include "../../level/Level.hpp"
#include "../ScreenManager/ScreenManager.h"

using namespace lv;

class GameplayScreen : public AbstractScreen
{
public:

	sf::RenderWindow &_window;
	sf::Event &_event;
	Player player;
	sf::Texture texture;
	Level level;
	Object pl;

	  // тут добавляем всяких сущностей типа героя, камеры и тд.
	 // это окно предназначено для вызовов методов героя,камеры и тд.
	// 

	GameplayScreen(sf::RenderWindow &window, sf::Event &event);
	~GameplayScreen();

	// Унаследовано через AbstractScreen
	virtual void handleInput() override;
	virtual void update(float delta) override;
	virtual void draw() override;
};

