#include"Hero.h"

Hero::Hero(lv::Level &lvl):Entity()
{
	_speed = 0; _onGround = false; _state = stay;
	obj = lvl.GetAllObjects();
}

Hero::~Hero(){}

void Hero::checkCollision(float dX, float dY)
{
	for (int i = 0; i < obj.size(); i++) {
		if (getHitBoxRect().intersects(obj[i].rect)) {
			if (obj[i].name == "solid") {
				if (dX > 0) { _posCoord.x = obj[i].rect.left - _widht; }
				if (dX < 0) { _posCoord.x = obj[i].rect.left + obj[i].rect.width; }
				if (dY > 0) { _posCoord.y = obj[i].rect.top - _widht; _direction.y = 0; _onGround = true; }
				if (dY < 0) { _posCoord.y = obj[i].rect.top + obj[i].rect.height; _direction.y = 0; }
			}
		}
	}
}

void Hero::control()
{
	if (Keyboard::isKeyPressed)	{
		if ((Keyboard::isKeyPressed(Keyboard::A)) || (Keyboard::isKeyPressed(Keyboard::Left))) {
			_speed = 0.2f; _state = walk_l;
		}
		if ((Keyboard::isKeyPressed(Keyboard::D)) || (Keyboard::isKeyPressed(Keyboard::Right))) {
			_speed = 0.2f; _state = walk_r;
		}
		if (((Keyboard::isKeyPressed(Keyboard::W)) || (Keyboard::isKeyPressed(Keyboard::Up))) && (_onGround)) {
			//��-�� ����, ��� ��� ���� ������ ��������� _onGround, ���������� ����� �� ����������� �������� _direction.y 
			//�����, �������� �� �������, ���� ���� ������� ����������
			_speed = 0.7f; _direction.y = 0.7f; _state = jump; _onGround = false; //��� ����� �� ����� ���� ������
		}
	}
	else {
		_state = stay;//���� ������ �� ������, �� ��������� = ������
	}
}

void Hero::states()
{
	switch (_state)	{
	case stay: _speed = 0; _direction.x = 0; break; //������ �� ������
	case jump: break; //�������� ������ �������� � control(), ����� �� �� ������� ��-�� ����, ��� ��� �� �������� _onGround
	case walk_r: _direction.x = _speed; break;
	case walk_l: _direction.x = -_speed; break;
	}
}

void Hero::update(float time)
{
	control();
	states();

	_speed = 0;
	_posCoord.x += _direction.x * time;
	checkCollision(_direction.x, 0);
	_posCoord.y += _direction.y * time;
	checkCollision(0, _direction.y);
	//setHitBoxPosition(_posCoord.x + _widht / 2, _posCoord.y + _height / 2);
	setHitBoxPosition(_posCoord.x, _posCoord.y);
	//sprite.setPosition(getHitBoxPosition().x, getHitBoxPosition().y);
	_direction.y += 0.002 * time; //�����, ������ ��� �� ��� ����� ����� ���������� ������
}

