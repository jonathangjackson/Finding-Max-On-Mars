#pragma once
#include "Enemy.h"
#include "Level.h"
class Render
{
private:
	Level *l = nullptr;
public:
	Render();
	~Render();
	void drawFG(Enemy);
	void drawBG();
	void loadLevel(Level);
};

