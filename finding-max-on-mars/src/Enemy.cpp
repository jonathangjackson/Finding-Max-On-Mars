#include "Enemy.h"

Enemy::Enemy(Position p, ofImage s[], int size)
{
	this->sprites = NULL;
	this->sprites = new ofImage[size];
	for (int i = 0; i < size; i++) {
		this->sprites[i] = s[i];
	}
	this->p = p;
	dir = false;

}


Enemy::~Enemy()
{
	//delete[] this->sprites;
	//this->sprites = NULL;
}

int Enemy::getDamage() {
	return this->damage;
}

int Enemy::getHealth() {
	return this->health;
}

void Enemy::setHealth(int i) {
	this->health += i;
	if (this->health < 0) {
		this->health = 0;
	}
	if (this->health > 100) {
		this->health = 100;
	}
}

void Enemy::animateSprite(int i) {
	this->sprites[i].draw(this->p.getX(), this->p.getY());
}

Position &Enemy::getPos() {
	return p;
}

void Enemy::aiMove() {
	
	if (dir) {
		if (p.inFrame())
			p.setPostion(-2, 0);
	}
	else {
		if(p.inFrame())
			p.setPostion(2, 0);
	}
	int r = rand() % 50;
	if (r == 1)
		dir = !dir;
}