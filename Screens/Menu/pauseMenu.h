#pragma once

#include "Button.h"
#include <SFML/Graphics.hpp>
#include "../AbstractScreen/abstractScreen.h"

using namespace sf;

class pauseMenu : public AbstractScreen{
public:
	pauseMenu(RenderWindow &window);
	
	virtual void handleInput() override;
	virtual void update() override;
	virtual void draw() override;
private:
	Button _start;
	Button _quit;
	RenderWindow &_window;
	Event _event;
	enum Button_Focus{start,quit};
	Button_Focus _ButtFocus;
	void drawButtons();
	bool menuControl();

};
