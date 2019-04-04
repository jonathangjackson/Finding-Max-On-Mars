#pragma once
#include "Level.h"
#include "Render.h"

class Game
{
private:
	Level * levels;
	int currentLevel;
	Physics phys;
	Render ren;
public:
	Game();
	~Game();
	void init(int);
	void update();
	void onKeyDown(int);
};

