#include "Enemy.h"

using namespace sf;

//Коментарии к функциям есть в Enemy.h

Enemy::Enemy(int coordinateForX, int coordinateForY, int armorForEntity, int hitpointsForEntity){
	E_Name = "EnemyName";
}

Enemy::~Enemy(){

}

void Enemy::setEnemyHp(int Hp){
	E_Hp = Hp;
}

void Enemy::setEnemyArmor(int armor){
	E_Arm = armor;
}

void Enemy::setEnemyPossition(float x, float y){
	E_X_Y_Poss.x = x;
	E_X_Y_Poss.y = y;
}

void Enemy::setEnemySpeed(float Speed){
	E_Speed = Speed;
}

void Enemy::setActivytiEnemy(bool Activyti){
	E_Act = Activyti;
}

void Enemy::setEnemyAttack(int Attack){
	E_Attack = Attack;
}

////////////////////////////////////////////////////

int Enemy::getEnemyHp(){
	return E_Hp;
}

int Enemy::getEnemyArmor(){
	return E_Arm;
}

int Enemy::getEnemySpeed(){
	return E_Speed;
}

int Enemy::getEnemyAttack(){
	return E_Attack;
}

Vector2f Enemy::getEnemyPossition(){
	return E_X_Y_Poss;
}

int Enemy::getEnemyVectorMove(){
	return E_DX;
}

int Enemy::getEnemyVectorMoveLast(){
	return E_DXL;
}

////////////////////////////////////////////////////

void Enemy::updateAndDrawEnemy(Time &time, RenderWindow &window){
	//window.draw();

	//ИИ
	//Если E_Act=false то не атаковать
}
