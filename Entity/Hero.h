#pragma once

#include"Entity.h"

using namespace sf;

class Hero:public Entity
{
public:
	Hero();
	~Hero();

	void			setHeroPosition(float posX, float posY);
	void			control();
	void			states();
	void			update(float time);
	Vector2f		getHeroPosition();

private:
	enum{stay, jump, walk_r, walk_l} _state; //Состояния, стоять, прыжок, идти вправо(walk_right), идти влево(walk_left)
		
};