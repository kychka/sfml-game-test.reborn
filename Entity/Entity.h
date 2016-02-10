#pragma once
#include<SFML/Graphics.hpp>

using namespace sf;

class Entity
{
public:
					Entity();
	virtual			~Entity();
	//void			drawTheEntity(Texture textureForEntity, Sprite spriteForEntity); // ¬ариант –услана
	void			drawEntity(Image &image, int rectX, int rectY);
	
	Sprite			sprite;//—делал не приватным, чтобы избавитьс€ от костыльного метода drawHero(), по крайней мере пока не анимации
protected:
	//int			coordinateX; //Ћучше использовать тип Vector2f, он имеет обе оси координат в одной переменной(pos.x, pos.y)
	//int			coordinateY;
	//int			hitpoints; //ѕока составл€юща€геймпле€ не дошла до дамага, так что закомментил, можно даже пока удалить
	//int			armor;
	Vector2f		_posCoordinate;
	Vector2f		_direction;//направление движени€ игрока
	float			_speed;
	bool			_onGround;	
	Texture			_texture;
	//Sprite		_sprite;
};