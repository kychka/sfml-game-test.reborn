#include "Enemy.h"
#include "Hero.h"
using namespace sf;

//���������� � �������� ���� � Enemy.h

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
	/*	if (getHeroPossitionY() < getEnemyPossitionY()){ //���� ����� ��������� ���� �����
	//����� �� ����� �������� ladder(�������� ��� ����� ��� ��� ���� ������ ��� ��� ����� �������)
	}
	if (getHeroPossitionY > getEnemyPossitionY()){
	//����� �� ����� �������� ������� ������� ����� �� ������� � ������. ���� ������� �������� ��� ���� ��������� �������
	}
	if (getHeroPossitionX() < getEnemyPossitionX) //���� ����� ��������� ����� �����
	{
	EnemyShoot();
	E_Speed = -3; //����� ���������� ����� ���� � ���� �� ��������� 3
	E_DX = 2; //������ �������� ����� �������� 4 �.� ���� � ����
	E_DXL = 2; //� ������ ������ ���������� ��������
	}
	if (getHeroPossitionX() > getEnemyPossitionX){ //���� ����� ��������� ������ �����
	EnemyShoot();
	E_Speed = 3; //���������� ���� ����� � ����� �� ��������� 3
	E_DX = 1; //������� �������� ������ �� 2 �.� ���� � �����
	E_DXL = 1;
	}*/
}

void Enemy::EnemyIdle(){
	//��������� �������������� ��� ��� �� ���� ����
}

void Enemy::SeeEnemy(){
	if (���� ����� �����){
		E_SeeEnemy = true;
		if (���� ��������� ������������� ��������� ��������){
			E_CanAttack = true;
		}
		else if (���� ��������� ��������������� ��������� ��������){
			E_CanAttack = false;
		}
	}
	if (���� ����� �� �����){
		E_SeeEnemy = false;
		E_CanAttack = false;
	}
}

void Enemy::EnemyControl(){
	if (E_SeeEnemy && E_CanAttack){
		EnemyShoot();
		//�������� �������� � ������� �����
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
	//���������� ��������
}

void Enemy::EnemyDraw(RenderWindow &window){
	window.draw(E_Animation);
}

void Enemy::Gravity(){
	if (!E_onGround){
		//�������� ������� ���� �� Y �� ��������� 
	}
}

void Enemy::CollisionEnemy(){
	/*for (int i = 0; i < objGround.size(); i++)
	{
		if (H_Animation.getGlobalBounds().intersects(objGround[i].rect))
		{
			H_onGround = true;
			moveHero(0, -0.5*time.asMilliseconds());// ����������� �� �����
		}
	}
	for (int i = 0; i < objSolid.size(); i++)
	{
		if (H_Animation.getGlobalBounds().intersects(objSolid[i].rect))
		{
			if (H_DX == 2) { moveHero(-H_Speed* time.asMilliseconds(), 0); } // �� ������� ������ 
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
