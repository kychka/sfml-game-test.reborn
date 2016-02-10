#pragma once
#include<SFML/Graphics.hpp>

using namespace sf;

class Entity
{
public:
	Entity(int coordinateForX, int coordinateForY, int armorForEntity, int hitpointsForEntity);
	void drawTheEntity(Texture textureForEntity, Sprite spriteForEntity);
	virtual ~Entity();
protected:
	int coordinateX;
	int coordinateY;
	int hitpoints;
	int armor;
	Texture textureEntity;
	Sprite spriteEntity;
};