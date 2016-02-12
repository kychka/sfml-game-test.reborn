#include "Enemy.h"
#include "Hero.h"
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

float Enemy::getEnemyPossitionX(){
	return E_X_Y_Poss.x;
}

float Enemy::getEnemyPossitionY(){
	return E_X_Y_Poss.y;
}

int Enemy::getEnemyVectorMove(){
	return E_DX;
}

int Enemy::getEnemyVectorMoveLast(){
	return E_DXL;
}

////////////////////////////////////////////////////

void Enemy::EnemyGoingHero(){
	/*	if (getHeroPossitionY() < getEnemyPossitionY()){ //Если герой находится выше врага
	//Поиск по карте объектов ladder(лестницы или лифта или еще чего нибудь что его может поднять)
	}
	if (getHeroPossitionY > getEnemyPossitionY()){
	//Поиск по карте объектов которые спустят врага на уровень с героем. Если таковых способов нет надо прерывать функцию
	}
	if (getHeroPossitionX() < getEnemyPossitionX) //Если герой находится левее врага
	{
	EnemyShoot();
	E_Speed = -3; //Якобы заставляем врага идти в лево со скоростью 3
	E_DX = 2; //Вектор движения будет равнятся 4 т.к идет в лево
	E_DXL = 2; //И ставит вектор прошедшего движения
	}
	if (getHeroPossitionX() > getEnemyPossitionX){ //Если герой находится правее врага
	EnemyShoot();
	E_Speed = 3; //Заставляем идти врага в право со скоростью 3
	E_DX = 1; //Вектора движения ставим на 2 т.к идем в право
	E_DXL = 1;
	}*/
}

void Enemy::EnemyIdle(){
	//Небольшое патрулирование или что то типо того
}

void Enemy::SeeEnemy(){
	if (Если врага видит){
		E_SeeEnemy = true;
		if (Если растояние удовлетворяет растоянию стрельбы){
			E_CanAttack = true;
		}
		else if (Если растояние неудовлетворяет растоянию стрельбы){
			E_CanAttack = false;
		}
	}
	if (Если врага не видит){
		E_SeeEnemy = false;
		E_CanAttack = false;
	}
}

void Enemy::EnemyControl(){
	if (E_SeeEnemy && E_CanAttack){
		EnemyShoot();
		//Возможно движение в сторону героя
	}
	else if (E_SeeEnemy && !E_CanAttack){
		EnemyGoingHero();
		E_Alert = true;
		E_AlertIntevalFloat = 100;
	}
	else if (!E_SeeEnemy && E_Alert){
		EnemyGoingHero();
		E_AlertIntevalFloat--;
		if (E_AlertIntevalFloat < 0){
			E_Alert=false
		}
	}
	else if (!E_SeeEnemy){
		EnemyIdle();
	}
	
	
}

void Enemy::EnemyShoot(){
	//Реализация стрельбы
}

void Enemy::EnemyDraw(RenderWindow &window){
	window.draw(E_Animation);
}

void Enemy::Gravity(){
	if (!E_onGround){
		//Смешение спрайта вниз по Y со скоростью 
	}
}

void Enemy::CollisionEnemy(){
	/*for (int i = 0; i < objGround.size(); i++)
	{
		if (H_Animation.getGlobalBounds().intersects(objGround[i].rect))
		{
			H_onGround = true;
			moveHero(0, -0.5*time.asMilliseconds());// Отталкиваем от земли
		}
	}
	for (int i = 0; i < objSolid.size(); i++)
	{
		if (H_Animation.getGlobalBounds().intersects(objSolid[i].rect))
		{
			if (H_DX == 2) { moveHero(-H_Speed* time.asMilliseconds(), 0); } // от боковых сторон 
			if (H_DX == 4) { moveHero(H_Speed *time.asMilliseconds(), 0); }
		}
	}*/
}

void Enemy::updateAndDrawEnemy(Time &time, RenderWindow &window){
	//window.draw();
	Gravity();
	SeeEnemy();
	CollisionEnemy();
	EnemyControl();
}
