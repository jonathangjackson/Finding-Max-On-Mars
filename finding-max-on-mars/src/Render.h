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
	void drawFG();
	void drawBG();
	void loadLevel(Level);
};

