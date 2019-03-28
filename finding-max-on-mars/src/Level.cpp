#include "Level.h"

Level::Level(string name, ofImage heightMap, ofImage bgImage, string* enemyTypes, int enemies, float gravity) {
	this->name = name;
	this->heightMap = heightMap;
	this->bgImg = bgImage;
	this->enemies = enemies;
	this->gravity = gravity;

	this->enemyTypes = new string[enemyTypes->length];
	for (int i = 0; i < this->enemyTypes->length; i++) {
		this->enemyTypes[i] = enemyTypes[i];
	}

	//generate enemies

}//name, heightMap, bgImage, enemyTypes, numOfEnemies, gravity

Level::Level() {

}

Level::~Level()
{
	delete[] enemyTypes;
	enemyTypes = NULL;
}
