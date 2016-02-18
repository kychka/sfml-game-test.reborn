#pragma once
#include "../AbstractScreen/abstractScreen.h"
#include <iostream>
#include "../../Animation/AnimationClass.h"

class GameplayScreen : public AbstractScreen
{
public:

	sf::RenderWindow &_window;
	sf::Event &_event;
	std::shared_ptr<IAnimation> ExplosionAnim;
	sf::Texture texture;
	sf::Clock clock;

	  // тут добавляем всяких сущностей типа героя, камеры и тд.
	 // это окно предназначено для вызовов методов героя,камеры и тд.
	// обработка физики должна не зависить напрямую от экрана

	GameplayScreen(sf::RenderWindow &window, sf::Event &event);
	~GameplayScreen();

	// Унаследовано через AbstractScreen
	virtual void handleInput() override;
	virtual void update(float delta) override;
	virtual void draw() override;
};

