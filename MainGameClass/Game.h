#pragma once
#include <string>
#include <SFML/Graphics.hpp>

using namespace sf;

struct Configuration
{
	int width, height;
	bool fullscreen;
	std::string window_title;
};


class Game
{
private:

	/*static*/RenderWindow *window;
	Event event;
	Clock clock;
	float delta;

	void computeDelta();

	void handleInput();
	void update();
	void draw();
	
public:

	Game(Configuration &config);

	void  runGame();

	~Game();
};

