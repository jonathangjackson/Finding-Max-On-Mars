#include "Game.h"

Game::Game()
{
	levels = new Level[3];
	ofImage levelOneBG;
	//name, heightMap, bgImage, enemyTypes, numOfEnemies, gravity
	string *names = new string[3];
	names[0] = "one";
	levels[0] = Level(names[0], levelOneBG, levelOneBG, names, 9.81);
	levels[1] = Level();
	levels[2] = Level();
}


Game::~Game()
{
	delete[] levels;
	levels = NULL;
}
