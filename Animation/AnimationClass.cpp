


#include "AnimationClass.h"
#include <iostream>


AnimationClass::AnimationClass()
{
}

AnimationClass::AnimationClass(sf::Texture &texture, int frameCountX, int frameCountY, float cycleFrame, int x, int y, int w, int h)
{
	frames = std::vector<sf::Sprite*>();
	std::fill(frames.begin(), frames.end(), nullptr);// 	специальный тип nullptr из с++11. его можно присваивать указателям и избегать проблем с 0 и null
	if (frameCountY <= 0) { frameCountY = 1; this->frameCountY = frameCountY; }
	if (frameCountX <= 0) { frameCountX = 1; this->frameCountX = frameCountX; }

	this->frameCountX = frameCountX;
	this->frameCountY = frameCountY;
	int frameWidth = w; // узнаем ширину одного кадра
	int frameHeight = h; // узнаем высоту одного кадра

	for (int i = 0; i < frameCountY; ++i) {

		for (int j = 0; j < frameCountX; ++j) {// добавляем в frames каждый раз новый textureRegion
											   // где i * frameWidth это начало вырезания кадра из текстуры
			frames.push_back(new sf::Sprite(texture, sf::IntRect(x + (frameWidth*j), y + (frameHeight*i), frameWidth, frameHeight)));
		}
	}

	maxFrameTime = cycleFrame / (frameCountX*frameCountY); // время проигрывания одного кадра узнается путем
	std::cout << maxFrameTime ;							// время проигрывания всей анимации делёное на количество кадров
	currentFrameTime = 0;
	frame = 0;													   
}



AnimationClass::~AnimationClass()
{
}

void AnimationClass::flip(bool flipX, bool flipY)
{
}

void AnimationClass::setSize(int width, int height)
{
}

void AnimationClass::update(float deltaTime)
{
	currentFrameTime += deltaTime; // добавляем значеия dt к currentFrameTime
	if (currentFrameTime >= maxFrameTime) { //если время текущего кадра  больше времени отображения одного кадра, то инкрементируем фрейм и обнуляем текущее время кадра
		
		frame++;
		currentFrameTime = 0;	
	}

	if (frame >= frameCountX*frameCountY) { // если фрейм больше или равен количеству всех фреймов, то обнуляем фрейм
		frame = 0;
	}
}

void AnimationClass::draw(float posX, float posY, sf::RenderWindow &window)
{
	sf::Sprite *s = frames[frame];

	s->setPosition(posX, posY);
	window.draw(*s);
}
