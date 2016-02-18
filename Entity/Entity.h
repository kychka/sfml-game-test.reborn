#pragma once
#include<SFML/Graphics.hpp>
#include "../level/Level.hpp"

using namespace sf;

class Entity
{
public:
					Entity();
	virtual			~Entity();
	void			drawEntity(Image &image, int rectstartX, int rectstartY, int rectX, int rectY);
	void			createHitBox(float widht, float height);
	void			setHitBoxPosition(float posX, float posY);
	Vector2f		getHitBoxPosition();
	FloatRect		getHitBoxRect();
	
	std::vector		<lv::Object> obj;
	Sprite			sprite;//������ �� ���������, ����� ���������� �� ����������� ������ drawHero(), �� ������� ���� ���� �� ��������
protected:
	Vector2f		_posCoord;
	Vector2f		_direction;//����������� �������� ������
	float			_widht, _height;
	float			_speed;
	bool			_onGround;	
	Texture			_texture;
	//Sprite		_sprite;
};