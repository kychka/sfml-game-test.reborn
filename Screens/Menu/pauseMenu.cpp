#include "pauseMenu.h"
#include <iostream>
pauseMenu::pauseMenu(RenderWindow &window, Event &event) :
_start("Продолжить", Vector2f(window.getView().getSize().x / 2.5, window.getView().getSize().y / 2.5), 50),
_quit("Выход", Vector2f(_start.getGlobalBounds().left, _start.getGlobalBounds().top + _start.getGlobalBounds().height), 50),
_window(window), _event(event)
{
	_ButtFocus = start;
}




bool pauseMenu::menuControl() {
	while (_window.pollEvent(_event)) {
		if (_event.type == Event::Closed)_window.close();
		if (_event.type == Event::KeyReleased) {
			if (_event.key.code == Keyboard::Up) {
				if (_ButtFocus != start)_ButtFocus = Button_Focus(_ButtFocus - 1);
				else _ButtFocus = quit;
			}
			if (_event.key.code == Keyboard::Down) {
				if (_ButtFocus != quit)_ButtFocus = Button_Focus(_ButtFocus + 1);
				else _ButtFocus = start;
			}
			if (_event.key.code == Keyboard::Return) {
				switch (_ButtFocus)
				{
				case start:

					ScreenManager::setCurrentScreen("startMenu");
					return true;
						break;
				case quit:
					_window.close();
					break;
				default:
					break;
				}
			}
		}
	}
	return false;
}

void pauseMenu::drawButtons() {

	_start.draw(_window);
	_quit.draw(_window);

}

void pauseMenu::handleInput()
{
}

void pauseMenu::update(float delta)
{
}



void pauseMenu::draw() {
	
	
		if (menuControl())return;
		if (_ButtFocus == start) { _start.setFocus(true); _quit.setFocus(false); }
		if (_ButtFocus == quit) { _start.setFocus(false); _quit.setFocus(true); }

		drawButtons();
}

