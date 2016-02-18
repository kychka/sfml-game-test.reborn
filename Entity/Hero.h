#pragma once
#include"Entity.h"

using namespace sf;

class Hero:public Entity
{
public:
					Hero(lv::Level &lvl);
					~Hero();

	void			checkCollision(float dX, float dY);
	void			control();
	void			states();
	void			update(float time);

private:
	enum{stay, jump, walk_r, walk_l} _state; //Состояния, стоять, прыжок, идти вправо(walk_right), идти влево(walk_left)
		
};