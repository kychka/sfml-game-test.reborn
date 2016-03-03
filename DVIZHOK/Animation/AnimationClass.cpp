#include <memory>

#include "AnimationClass.h"
#include <iostream>

using namespace std;
AnimationClass::AnimationClass()
{
}

AnimationClass::AnimationClass(sf::Texture &texture, int frameCountX, int frameCountY, float cycleFrame, int x, int y, int w, int h)
{
	
	frames =  std::vector<shared_ptr<sf::Sprite> >();

	if (frameCountY <= 0) { frameCountY = 1; this->frameCountY = frameCountY; }
	if (frameCountX <= 0) { frameCountX = 1; this->frameCountX = frameCountX; }

	this->frameCountX = frameCountX;
	this->frameCountY = frameCountY;
	int frameWidth = w; // ������ ������ ������ �����
	int frameHeight = h; // ������ ������ ������ �����

	for (int i = 0; i < frameCountY; ++i) {

		for (int j = 0; j < frameCountX; ++j) {// ��������� � frames ������ ��� ����� textureRegion
											   // ��� i * frameWidth ��� ������ ��������� ����� �� ��������
			frames.push_back(make_shared<sf::Sprite>(sf::Sprite(texture, sf::IntRect(x + (frameWidth*j), y + (frameHeight*i), frameWidth, frameHeight))));
		}
	}

	maxFrameTime = cycleFrame / (frameCountX*frameCountY); // ����� ������������ ������ ����� �������� �����
						// ����� ������������ ���� �������� ������ �� ���������� ������
	currentFrameTime = 0;
	frame = 0;													   
}



AnimationClass::~AnimationClass()
{
	
}

void AnimationClass::flip(bool flipX, bool flipY)
{
}

void AnimationClass::setSize(float width, float height)
{
	for (auto v : frames) {

		v->setScale(width/v->getGlobalBounds().width, height/v->getGlobalBounds().height);
	}
}

void AnimationClass::update(float deltaTime)
{
	currentFrameTime += deltaTime; // ��������� ������� dt � currentFrameTime
	if (currentFrameTime >= maxFrameTime) { //���� ����� �������� �����  ������ ������� ����������� ������ �����, �� �������������� ����� � �������� ������� ����� �����
		
		frame++;
		currentFrameTime = 0;	
	}

	if (frame >= frameCountX*frameCountY) { // ���� ����� ������ ��� ����� ���������� ���� �������, �� �������� �����
		frame = 0;
	}
}

void AnimationClass::draw(float posX, float posY, sf::RenderWindow &window)
{
	std::shared_ptr<sf::Sprite> s = frames[frame];

	s->setPosition(posX, posY);
	window.draw(*s);
}
