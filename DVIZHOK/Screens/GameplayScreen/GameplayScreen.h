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

	  // ��� ��������� ������ ��������� ���� �����, ������ � ��.
	 // ��� ���� ������������� ��� ������� ������� �����,������ � ��.
	// 

	GameplayScreen(sf::RenderWindow &window, sf::Event &event);
	~GameplayScreen();

	// ������������ ����� AbstractScreen
	virtual void handleInput() override;
	virtual void update(float delta) override;
	virtual void draw() override;
};

