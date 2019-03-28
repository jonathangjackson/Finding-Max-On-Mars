#pragma oncec
#include "ofImage.h"
using namespace std;

class Level
{
private:
	ofImage heightMap;
	ofImage bgImg;
	string *enemyTypes;
	int enemies;
	float gravity;
	string name;
public:
	Level(string, ofImage, ofImage, string*, int, float);//name, heightMap, bgImage, enemyTypes, numOfEnemies, gravity
	Level();
	~Level();
	ofImage getHeightMap();
	ofImage getBg();
	void spawnEnemies();
	float getGravity();
};

