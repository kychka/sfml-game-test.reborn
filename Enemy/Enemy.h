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
	int getEnemyVectorMove();  // ������� ������ ��������(���� �� �������� �� �� ����� 0, ���� �������� �� ����� ����� ���������� 1 ���� � ����, 2 ���� � �����, 3 ���� ����, 4 ���� � ����)
	int getEnemyVectorMoveLast();  //������ �������� � ��������� ������� ������ ��� ����������� �������� ���� ����� 
	////////������////////////
	void updateAndDrawEnemy(Time &time, RenderWindow &window);//��������� � �������� (���������� ����)
private:
	bool E_onGround;								 // �� ����� ��� ���
	bool E_Act;										//������� �� ����		
	int E_Hp;                                      // �����
	int E_Arm;                                    // �����
	int E_Attack;								 //���� ��������� ������
	int E_DX;                                    //������ ��������
	int E_DXL;                                  // ������ ���������� ��������
	float E_Speed;                             // C������� ���������  
	Vector2f E_X_Y_Poss;                   // ������� �� � � �
	String E_Name;                        // ���
};