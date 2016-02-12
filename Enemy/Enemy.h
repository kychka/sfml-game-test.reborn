#include "Entity.h"

class Enemy : public Entity {
public:
	Enemy(int coordinateForX, int coordinateForY, int armorForEntity, int hitpointsForEntity);
	~Enemy();
	///////////��������� ���������� �����//////
	void setEnemyHp(int hp); //��������� HP
	void setEnemyArmor(int armor); //��������� �����
	void setEnemyPossition(float x, float y); //��������� �������
	void setEnemySpeed(float Speed); //��������� �������� �����
	void setActivytiEnemy(bool Activyti); //������� �� ���� ��� ��������
	void setEnemyAttack(int Attack); //���������� ���� ��� �����(������� �� �������)
	//////////������ ���������� �����///
	int getEnemyHp(); //����� ������� �������� HP
	int getEnemyArmor(); //����� ������� �������� �����
	int getEnemySpeed(); //����� ������� �������� �������� �����
	int getEnemyAttack(); //����� ������� �������� ����� �����
	Vector2f getEnemyPossition(); //����� ������� ��������� �� X , Y
	float getEnemyPossitionX(); //����� ��������� �� X
	float getEnemyPossitionY(); //����� ��������� �� Y
	int getEnemyVectorMove();  // ������� ������ ��������(���� �� �������� �� �� ����� 0, ���� �������� �� ����� ����� ���������� 1 ���� � ����, 2 ���� � �����, 3 ���� ����, 4 ���� � ����)
	int getEnemyVectorMoveLast();  //������ �������� � ��������� ������� ������ ��� ����������� �������� ���� ����� 
	////////������////////////
	void EnemyGoingHero(); //������������� ������ �����
	void EnemyIdle(); //��������� ����� � ��������� ���������
	void SeeEnemy(); //�������� ����� �� �� �����
	void EnemyControl(); //�� �����
	void EnemyShoot(); //���������� �������� �����
	void EnemyDraw(RenderWindow &window); //��������� ����� ���������� � ������� updateAndDrawEnemy
	void Gravity(); //����������� ���������� �� �����
	void CollisionEnemy(); //������� � ������������� ����� �� ���� ��� ��� ��������
	void updateAndDrawEnemy(Time &time, RenderWindow &window);//��������� � ����� ��������� ������� ����  �� � �.�
private:
	bool E_onGround;								 // �� ����� ��� ���
	bool E_Act;										//������� �� ����		
	bool E_SeeEnemy;								//����� �� �� �����
	bool E_CanAttack;								//����� �� ���������
	bool E_Alert;									//���������� �� ����. ����� ��� ���� ��� �� ���� ����� �� ����� ������� � ����� ����� ���� ���������� ������ �����
	int E_Hp;                                      // �����
	int E_Arm;                                    // �����
	int E_Attack;								 //���� ��������� ������
	int E_DX;                                    //������ �������� 1-������, 2 -�����.
	int E_DXL;                                  // ������ ���������� ��������
	float E_AlertIntevalFloat;					//����� ������� ����� ���������� � ������������ ��� E_Alert
	float E_Speed;                             // C������� ���������  
	Vector2f E_X_Y_Poss;                   // ������� �� � � �
	String E_Name;                        // ���
	Time E_AlertInteval;					//������ ��� E_Alert
	Animation E_Animation;				  //����� ��������
};