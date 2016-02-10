#include "Entity.h"

class Enemy : public Entity {
public:
	Enemy(int coordinateForX, int coordinateForY, int armorForEntity, int hitpointsForEntity);
	~Enemy();
	///////////Установка параметров врага//////
	void setEnemyHp(int hp); //Установка HP
	void setEnemyArmor(int armor); //Установка Брони
	void setEnemyPossition(float x, float y); //Установка позиции
	void setEnemySpeed(float Speed); //Установка скорости врага
	void setActivytiEnemy(bool Activyti); //Активен ли враг или пассивен
	void setEnemyAttack(int Attack); //Установить урон для врага(который он наносит)
	//////////Взятие параметров врага///
	int getEnemyHp(); //Взять текущее значение HP
	int getEnemyArmor(); //Взять текущее значение Брони
	int getEnemySpeed(); //Взять текущее значение скорости врага
	int getEnemyAttack(); //Взять текущее значение урона врага
	Vector2f getEnemyPossition(); //Взять текущее положение по X , Y
	int getEnemyVectorMove();  // Тукущий вектор движения(если не движется то он будет 0, если движется то темод будет возвражять 1 если в верх, 2 если в право, 3 если вниз, 4 если в лево)
	int getEnemyVectorMoveLast();  //Вектор движнния в прошедшем времени служит для определиния анимации если стоит 
	////////Прочее////////////
	void updateAndDrawEnemy(Time &time, RenderWindow &window);//Отрисовка и движение (Заставляет жить)
private:
	bool E_onGround;								 // На замле или нет
	bool E_Act;										//Активен ли враг		
	int E_Hp;                                      // Жизни
	int E_Arm;                                    // Броня
	int E_Attack;								 //Урон наносимый врагом
	int E_DX;                                    //Вектор движения
	int E_DXL;                                  // Вектор прошедшего движения
	float E_Speed;                             // Cкорость персонажа  
	Vector2f E_X_Y_Poss;                   // Позиция по х и у
	String E_Name;                        // Имя
};