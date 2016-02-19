#include "CamView.h"



CamView::CamView(RenderWindow &window, lv::Level &lvl, Hero &hero)
{
	this->window = &window;
	this->lvl = &lvl;
	this->hero = &hero;
	view.reset(FloatRect(0.0, 0.0, window.getSize().x, window.getSize().y));//установка камеры по размеру окна
	MapRect.height = lvl.GetMapSize().y * lvl.GetTileSize().y;
	MapRect.width = lvl.GetMapSize().x * lvl.GetTileSize().x;
	//view.setCenter(hero.hero_sprite.getPosition().x + 100, hero.hero_sprite.getPosition().y);
	//view.setCenter(hero.getPosition().x + 100, hero.h_animation.getPosition().y);
	view.setCenter(hero.getHitBoxPosition().x + 150, hero.getHitBoxPosition().y);
}


CamView::~CamView(){}

void CamView::updateCam()
{
	if ((hero->getHitBoxPosition().x - (view.getSize().x / 2)>0) && (hero->getHitBoxPosition().x + (view.getSize().x / 2) < MapRect.width))
	{
		view.setCenter(hero->getHitBoxPosition().x, view.getCenter().y);
	}
	if ((hero->getHitBoxPosition().y - (view.getSize().y / 2)>0) && (hero->getHitBoxPosition().y + (view.getSize().y / 2) < MapRect.height))
	{
		view.setCenter(view.getCenter().x, hero->getHitBoxPosition().y);
	}

	//view.setCenter(hero->hero_sprite.getPosition().x + 100, hero->hero_sprite.getPosition().y);
	window->setView(view);
}
