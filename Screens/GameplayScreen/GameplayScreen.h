#pragma once
#include "../AbstractScreen/abstractScreen.h"

class GameplayScreen : public AbstractScreen
{
public:

	sf::RenderWindow &_window;
	sf::Event &_event;

	GameplayScreen(sf::RenderWindow &window, sf::Event &event);
	~GameplayScreen();

	// Унаследовано через AbstractScreen
	virtual void handleInput() override;
	virtual void update(float delta) override;
	virtual void draw() override;
};

