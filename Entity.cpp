#include "Entity.h"

Entity::Entity(int coordinateForX, int coordinateForY, int armorForEntity, int hitpointsForEntity) 
{
	coordinateX = coordinateForX;
	coordinateY = coordinateForY;
	armor	= armorForEntity;
	hitpoints = hitpointsForEntity;

}
void Entity::drawTheEntity(Texture textureForEntity, Sprite spriteForEntity)
{
	textureEntity = textureForEntity;
	spriteEntity = spriteForEntity;
	spriteEntity.setTexture(textureEntity);
}
Entity::~Entity()
{

}