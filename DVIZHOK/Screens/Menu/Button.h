#ifndef MENU_H
#define MENU_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

using namespace sf;
class Button{
public:
	Button();
	Button(String text, Vector2f position, unsigned int character_size = 30);
	Button(String text, float position_x, float position_y, unsigned int character_size = 30);
	FloatRect getGlobalBounds();
	void setFocus(bool focus);
	void update();
	void setCharacterSize(int size);
	int getCharacterSize();
	bool _isClicked;//была ли кнопка нажата
	void clicked();//функция нажатия на кнопку 
	void draw(RenderWindow &window);
private:
	
	Text _text;
	Font _font;
	bool _focus;//выбрана ли кнопка 
	
};

#endif