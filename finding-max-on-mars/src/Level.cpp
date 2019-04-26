#include "Level.h"

Level::Level(string name, ofImage heightMap, ofImage bgImage, string enemyTypes[], int enemies, float gravity) {
	this->name = name;
	this->heightMap = heightMap;
	this->bgImg = bgImage;
	this->enemies = enemies;
	this->gravity = gravity;
	this->enemyTypes =  new string[enemyTypes->size()];

	for (int i = 0; i < enemyTypes->size(); i++) {
		this->enemyTypes[i] = enemyTypes[i];
	}

	//generate enemies

	srand(time(0));
	spawnEnemies();
}

Level::Level() {

}

Level::~Level()
{
	//delete[] enemyTypes;
	//enemyTypes = NULL;
}


ofImage Level::getHeightMap() {
	return this->heightMap;
}

ofImage Level::getBg() {
	return this->bgImg;
}

void Level::spawnEnemies() {
	for (int i = 0; i < enemies; i++) {

		int r = rand() % enemyTypes->size();


		ofImage *enemyImg;
		enemyImg = new ofImage[1];
		enemyImg[0].load(enemyTypes[r] + ".png");

		Position start;
		r = rand() % 1024;
		start.setPostion(r, 200);

		enemyList.push_front(Enemy(Position(start), enemyImg, 1));
		
	}
}

float Level::getGravity() {
	return this->gravity;
}

void Level::moveEnemies() {
	for (int i = 0; i < enemyList.size(); i++) {
		enemyList.at(i).aiMove();
	}
}

void Level::drawEnemies() {
	for (int i = 0; i < enemyList.size(); i++) {
		enemyList.at(i).animateSprite(0);
	}
}

Position Level::getEnemy(int i) {
	if (i < 0 || i > enemyList.size() - 1) {
		cout << "NOT VALID" << endl;
		return Position();
	}
	else {
		if (enemyList.at(i).getPos().inFrame()) {
			return enemyList.at(i).getPos();
		}
	}
}