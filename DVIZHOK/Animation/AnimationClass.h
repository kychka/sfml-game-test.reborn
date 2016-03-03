#pragma once
#include "IAnimation.h"
#include<memory>

class AnimationClass : public IAnimation
{
private:
	 std::vector<std::shared_ptr<sf::Sprite> > frames;
	 float maxFrameTime; // ������������ ����������� ������ �����
	 float currentFrameTime; // ����� ����������� �������� �����
	 int frameCountX; // ���������� ������ �������� �� ���� �� ������-�����
	 int frameCountY; // ���������� ������ �������� �� ������ �� ������-�����
	 int frame; // ��������� ����

public:
	AnimationClass();
	AnimationClass(sf::Texture &texture, int frameCountX, int frameCountY, float cycleFrame, int x, int y, int w, int h);
	~AnimationClass();

	// ������������ ����� IAnimation
	virtual void flip(bool flipX, bool flipY) override;
	virtual void setSize(float width, float height) override;
	virtual void update(float deltaTime) override;
	virtual void draw(float posX, float posY, sf::RenderWindow &window) override;
};

