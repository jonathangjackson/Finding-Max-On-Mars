#pragma once
#include "Position.h"
#include "ofImage.h"

class Enemy
{
private:
	Position p;
	int damage;
	int health;
	ofImage *sprites;
	bool animate;
	float jumpTime;
public:
	Enemy();
	~Enemy();
	int getDamage();
	int getHealth();
	void setHealth(int i);
	ofImage animateSprite(int i);
};

