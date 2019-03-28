#pragma once
#include "Level.h"
class Game
{
private:
	Level levels[3];
	int currentLevel;
public:
	Game();
	~Game();
	void init(int);
	void update();
	void onKeyDown(int);
};

