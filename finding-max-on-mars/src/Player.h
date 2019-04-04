#pragma once
#include "Enemy.h"
#include <iostream>
using namespace std;

class Player : public Enemy
{
private:
	int score;
	int lives;
public:
	int getLives();
	int getScore();
	void setScore(int);
	void subtractLife();
};

