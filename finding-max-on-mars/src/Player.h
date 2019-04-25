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
	Player(Position p, ofImage s[], int size) : Enemy(p, s, size) { score = 0; lives = 3; }
	int getLives();
	int getScore();
	void setScore(int);
	void subtractLife();
};

