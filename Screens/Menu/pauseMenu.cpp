#include "pauseMenu.h"

pauseMenu::pauseMenu(RenderWindow &window) : _window(window),
_start("Продолжить", Vector2f(window.getView().getSize().x / 2.5, window.getView().getSize().y / 2.5), 50),
_quit("Выход", Vector2f(_start.getGlobalBounds().left, _start.getGlobalBounds().top + _start.getGlobalBounds().height), 50) {
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

void pauseMenu::update() {
	_start.update(_window);
	_quit.update(_window);
}

void pauseMenu::runMenu() {
	while (_window.isOpen())
	{
		if (menuControl())return;
		if (_ButtFocus == start) { _start.setFocus(true); _quit.setFocus(false); }
		if (_ButtFocus == quit) { _start.setFocus(false); _quit.setFocus(true); }
		_window.clear();
		update();
		_window.display();
	}
}