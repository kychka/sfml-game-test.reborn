#pragma once
#include <SFML\Graphics.hpp>
#include "../level/Level.hpp"
#include "Hero.h"
using namespace sf;
using namespace lv;

class CamView
{
public:
					CamView(RenderWindow &window, lv::Level &lvl, Hero &hero);
					~CamView();

	void			updateCam();

private:
	FloatRect		MapRect;
	View			view;
	RenderWindow	*window;
	lv::Level		*lvl;
	Hero			*hero;
};