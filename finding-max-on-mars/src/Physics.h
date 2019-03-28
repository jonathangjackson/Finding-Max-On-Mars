#pragma once
#include "Position.h"
#include "Level.h"

class Physics
{
private:
	float gravity;
	float time;
	
public:
	Physics();
	~Physics();
	bool checkCollision(Position, int);
	Position jump(Position, float);
	void setGravity(Level);
};

