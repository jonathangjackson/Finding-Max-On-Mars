#pragma once
class Level
{
private:
	//ofImage heightMap
	//ofImage bgImg
	//string enemyTypes[];
	int enemies;
	float gravity;
public:
	Level();
	~Level();
	//ofImg getHeightMap()
	//ofImg getBg()
	void spawnEnemies();
	float getGravity();
};

