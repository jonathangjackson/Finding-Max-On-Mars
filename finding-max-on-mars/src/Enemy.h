#pragma once
class Enemy
{
private:
	//position
	int damage;
	int health;
	//ofImage sprites[]
	bool animate;
	float jumpTime;
public:
	Enemy();
	~Enemy();
	int getDamage();
	int getHealth();
	void setHealth(int i);
	//ofImg animateSprite(int i);
};

