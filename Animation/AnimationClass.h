#pragma once
#include "IAnimation.h"
class AnimationClass : public IAnimation
{
private:
	 std::vector<sf::Sprite*> frames;
	 float maxFrameTime; // длительность отображения одного кадра
	 float currentFrameTime; // время отображения текущего кадра
	 int frameCountX; // количество кадров анимации по иксу на спрайт-листе
	 int frameCountY; // количество кадров анимации по игреку на спрайт-листе
	 int frame; // отдельный кадр

public:
	AnimationClass();
	AnimationClass(sf::Texture &texture, int frameCountX, int frameCountY, float cycleFrame, int x, int y, int w, int h);
	~AnimationClass();

	// Унаследовано через IAnimation
	virtual void flip(bool flipX, bool flipY) override;
	virtual void setSize(int width, int height) override;
	virtual void update(float deltaTime) override;
	virtual void draw(float posX, float posY, sf::RenderWindow & window) override;
};

