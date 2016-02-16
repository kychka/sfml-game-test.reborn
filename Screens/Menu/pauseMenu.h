#pragma once

#include "Button.h"
#include <SFML/Graphics.hpp>
#include "../AbstractScreen/abstractScreen.h"
#include "../ScreenManager/ScreenManager.h"

using namespace sf;

class pauseMenu : public AbstractScreen {
public:
	pauseMenu(RenderWindow &window, sf::Event &event);
	
	virtual void handleInput() override;
	virtual void update(float delta) override;
	virtual void draw() override;
private:
	Button _start;
	Button _quit;
	
	sf::RenderWindow &_window;
	Event &_event;

	enum Button_Focus{start,quit};
	Button_Focus _ButtFocus;
	void drawButtons();
	bool menuControl();

};
