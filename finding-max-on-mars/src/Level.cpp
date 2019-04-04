#include "Level.h"

Level::Level(string name, ofImage heightMap, ofImage bgImage, string enemyTypes[], int enemies, float gravity) {
	this->name = name;
	this->heightMap = heightMap;
	this->bgImg = bgImage;
	this->enemies = enemies;
	this->gravity = gravity;

	this->enemyTypes = new string[enemyTypes->size()];
	for (int i = 0; i < this->enemyTypes->size(); i++) {
		this->enemyTypes[i] = enemyTypes[i];
	}

	//generate enemies
	spawnEnemies();
}

Level::Level() {

}

Level::~Level()
{
	delete[] enemyTypes;
	enemyTypes = NULL;
}


ofImage Level::getHeightMap() {
	return this->heightMap;
}

ofImage Level::getBg() {
	return this->bgImg;
}

void Level::spawnEnemies() {

}

float Level::getGravity() {
	return this->gravity;
}
