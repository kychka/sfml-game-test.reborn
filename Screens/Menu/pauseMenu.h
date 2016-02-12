#pragma once

#include"menu.h"
#include <SFML/Graphics.hpp>

using namespace sf;

class pauseMenu {
public:
	pauseMenu(RenderWindow &window);
	void runMenu();
private:
	Button _start;
	Button _quit;
	RenderWindow &_window;
	Event _event;
	enum Button_Focus{start,quit};
	Button_Focus _ButtFocus;
	void update();
	bool menuControl();

};
