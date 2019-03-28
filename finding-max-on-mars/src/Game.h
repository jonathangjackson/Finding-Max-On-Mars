#pragma once
#include "Level.h"
class Game
{
private:
	Level *levels;
	int currentLevel;
public:
	Game();
	~Game();
	void init(int);
	void update();
	void onKeyDown(int);
};

