#include"StartMenu.h"


 
startMenu::startMenu(RenderWindow &window, Event &event) : 
	_start("Старт", Vector2f(window.getView().getSize().x / 2.5f, window.getView().getSize().y / 2.5f), 50),
	_options("Настройки", Vector2f(_start.getGlobalBounds().left, _start.getGlobalBounds().top + _start.getGlobalBounds().height), 50),
	_autors("Авторы", Vector2f(_start.getGlobalBounds().left, _options.getGlobalBounds().top + _options.getGlobalBounds().height), 50),
	_quit("Выход", Vector2f(_start.getGlobalBounds().left, _autors.getGlobalBounds().top + _autors.getGlobalBounds().height), 50),
	_window(window), _event(event)
{
	
	_ButtFocus = start;
}

void startMenu::handleInput()
{
	
}



void startMenu::update(float delta) {
	
}



void startMenu::draw() {
	while (_window.isOpen()) {
		if (menuControl()) return;
		if (_ButtFocus == start) { _start.setFocus(true); _options.setFocus(false); _autors.setFocus(false); _quit.setFocus(false); }
		if (_ButtFocus == option) { _start.setFocus(false); _options.setFocus(true); _autors.setFocus(false); _quit.setFocus(false); }
		if (_ButtFocus == autors) { _start.setFocus(false); _options.setFocus(false); _autors.setFocus(true); _quit.setFocus(false); }
		if (_ButtFocus == quit) { _start.setFocus(false); _options.setFocus(false); _autors.setFocus(false); _quit.setFocus(true); }
		
		drawButtons();

	}
}  

void startMenu::drawButtons()
{	
	  
	_start.draw(_window);
	_options.draw(_window);
	_autors.draw(_window);
	_quit.draw(_window);
	
}

bool startMenu::menuControl() {
	while (_window.pollEvent(_event)) {
			if (_event.type == Event::Closed) _window.close();
			if (_event.type == Event::KeyReleased) {
				if (_event.key.code == Keyboard::Up)
					if (_ButtFocus != start) _ButtFocus = Button_focus(_ButtFocus - 1);
					else _ButtFocus = quit;
				if (_event.key.code == Keyboard::Down)
					if (_ButtFocus != quit) _ButtFocus = Button_focus(_ButtFocus + 1);
					else _ButtFocus = start;
				if (_event.key.code == Keyboard::Return) {
					switch (_ButtFocus) {
					case start:
						return true;
						break;
					case option:
						//RunOption();
						break;
					case autors:
						//RunAutors();
						break;
					case quit:
						_window.close();
						break;

					}
				}
				
			}
		}
	return false;

}






