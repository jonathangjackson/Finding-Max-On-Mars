#pragma once
#include "Player.h"
#include <stdlib.h>
#include <ctime>

class Level
{
private:
	ofImage heightMap;
	ofImage bgImg;
	string *enemyTypes = NULL;
	int enemies;
	float gravity;
	string name;
	deque<Enemy> enemyList;
public:
	Level(string, ofImage, ofImage, string[], int, float);//name, heightMap, bgImage, enemyTypes, numOfEnemies, gravity
	Level();
	~Level();
	ofImage getHeightMap();
	ofImage getBg();
	void spawnEnemies();
	float getGravity();
	void moveEnemies();
	void drawEnemies();
	Position getEnemy(int);
};

