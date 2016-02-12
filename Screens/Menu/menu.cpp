#include "menu.h"
#include <iostream>


Button::Button(String text, Vector2f position, unsigned int character_size)
{
	_font.loadFromFile("CyrilicOld.ttf");
	_text = Text(text, _font, character_size);
	_text.setPosition(position);
	_focus = false;
	_isClicked = false;
}
Button::Button(String text, float position_x, float position_y, unsigned int character_size) {
	_font.loadFromFile("CyrilicOld.ttf");
	_text = Text(text, _font, character_size);
	_text.setPosition(Vector2f(position_x, position_y));
	_focus = false;
	_isClicked = false;
}

void Button::draw(RenderWindow &window) {
	if (!_isClicked) {
		if (_focus)
		_text.setColor(Color::Green);
	else
		_text.setColor(Color(Color::Red));

	}
	else _text.setColor(Color::Blue);
	
	window.draw(_text);
}
void Button::setFocus(bool focus) {
	_focus = focus;
}

FloatRect Button::getGlobalBounds() {
	return _text.getGlobalBounds();
}

void Button::update(RenderWindow &window) {

	draw(window);
}

void Button::setCharacterSize(int size) {
	_text.setCharacterSize(size);
}

int Button::getCharacterSize() {
	return _text.getCharacterSize();
}

void Button::clicked() {
	_isClicked = true;
}