#pragma once
#include "Physics.h"
#include <stdlib.h>
#include <time.h> 

class Enemy
{
private:
	Position p;
	int damage;
	int health;
	ofImage *sprites;
	bool animate;
	float jumpTime;
	bool dir;
public:
	Enemy(Position, ofImage[], int);
	~Enemy();
	int getDamage();
	int getHealth();
	void setHealth(int);
	void animateSprite(int);
	Position &getPos();
	void aiMove();
};

