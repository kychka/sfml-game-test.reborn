#ifndef STARTMENU_H
#define STARTMENU_H

#include"menu.h"
#include <SFML/Graphics.hpp>

using namespace sf;

class startMenu {							  
public:
	startMenu(RenderWindow &win);
	void runMenu();//рабочий цикл стартового меню
	void update(float time);//обрабатывает и отрисовывает кнопки
	bool menuControl();//функйия отвечающая за работу с клавиатурой и возвращающая 1 если нажата кнопка старт.
private:
	enum Button_focus{start,option,autors,quit};
	Button _start;
	Button _options;
	Button _autors;
	Button _quit;
	RenderWindow& _window;
	Event event;// нужен для обработки событий
	Button_focus _ButtFocus;



};


#endif