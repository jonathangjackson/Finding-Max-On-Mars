#pragma once
#include "Render.h"
#include "Player.h"

class Game
{
private:
	Level * levels;
	int currentLevel;
	Physics phys;
	Render ren;
	Player *max = nullptr;
public:
	Game();
	~Game();
	void init(int);
	void update();
	void onKeyDown(int);
	void draw();
};

