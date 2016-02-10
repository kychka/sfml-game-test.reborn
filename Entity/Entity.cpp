#include "Entity.h"
 
Entity::Entity()
{
}

Entity::~Entity() {}
/*void Entity::drawTheEntity(Texture textureForEntity, Sprite spriteForEntity)
{
	texture = textureForEntity;
	sprite = spriteForEntity;
	sprite.setTexture(texture);
}*/


void Entity::drawEntity(Image &image, int rectX, int rectY)
{
	//_posCoordinate.x = coordinateForX;
	//_posCoordinate.y = coordinateForY;

	_texture.loadFromImage(image);
	sprite.setTexture(_texture);
	//sprite.setPosition(coordinateForX, coordinateForY);
	//_sprite.setTextureRect(IntRect(0, 0, rectX, rectY));//тут отсчет от 0, а для тест. картинки нуежн от 210
	sprite.setTextureRect(IntRect(0, 210, rectX, rectY));
}
