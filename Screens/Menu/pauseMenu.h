#pragma once

#include"Button.h"
#include <SFML/Graphics.hpp>

using namespace sf;

class pauseMenu {
public:
	pauseMenu(RenderWindow &window);
	void runMenu();
	void update();
	void draw();
private:
	Button _start;
	Button _quit;
	RenderWindow &_window;
	Event _event;
	enum Button_Focus{start,quit};
	Button_Focus _ButtFocus;

	bool menuControl();

};
