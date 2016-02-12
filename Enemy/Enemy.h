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
	float getEnemyPossitionX(); //Взять положение по X
	float getEnemyPossitionY(); //Взять положение по Y
	int getEnemyVectorMove();  // Тукущий вектор движения(если не движется то он будет 0, если движется то темод будет возвражять 1 если в верх, 2 если в право, 3 если вниз, 4 если в лево)
	int getEnemyVectorMoveLast();  //Вектор движнния в прошедшем времени служит для определиния анимации если стоит 
	////////Прочее////////////
	void EnemyGoingHero(); //Преследование врагом героя
	void EnemyIdle(); //Состояние врага в спокойном положении
	void SeeEnemy(); //Проверка видит ли он врага
	void EnemyControl(); //ИИ врага
	void EnemyShoot(); //Реализация стрельбы врага
	void EnemyDraw(RenderWindow &window); //Отрисовка врага вызываемая в функции updateAndDrawEnemy
	void Gravity(); //Воздействие гравитации на врага
	void CollisionEnemy(); //Функция с столкновением врага со всем что его окружает
	void updateAndDrawEnemy(Time &time, RenderWindow &window);//Отрисовка и вызов остальных функций типо  ИИ и т.д
private:
	bool E_onGround;								 // На замле или нет
	bool E_Act;										//Активен ли враг		
	bool E_SeeEnemy;								//Видит ли он героя
	bool E_CanAttack;								//Может ли атаковать
	bool E_Alert;									//Встревожен ли враг. Нужно для того что бы враг сразу не терял интерес к герою когда враг перестанет видить героя
	int E_Hp;                                      // Жизни
	int E_Arm;                                    // Броня
	int E_Attack;								 //Урон наносимый врагом
	int E_DX;                                    //Вектор движения 1-вправо, 2 -влево.
	int E_DXL;                                  // Вектор прошедшего движения
	float E_AlertIntevalFloat;					//Время которое будет указыватся в конструкторе для E_Alert
	float E_Speed;                             // Cкорость персонажа  
	Vector2f E_X_Y_Poss;                   // Позиция по х и у
	String E_Name;                        // Имя
	Time E_AlertInteval;					//Таймер для E_Alert
	Animation E_Animation;				  //Класс анимации
};