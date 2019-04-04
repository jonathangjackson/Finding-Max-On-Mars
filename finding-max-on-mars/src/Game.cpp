#include "Game.h"

Game::Game()
{
	levels = new Level[3];
	ofImage backgrounds[3];
	ofImage heightMaps[3];
	string names [3] = { "one", "two", "three" };

	//Load BG
	backgrounds[0].load("bgOne.png");
	backgrounds[1].load("bgTwo.png");
	backgrounds[2].load("bgThree.png");

	//Load HM
	heightMaps[0].load("hmOne.png");
	heightMaps[1].load("hmTwo.png");
	heightMaps[2].load("hmThree.png");

	levels[0] = Level(names[0], heightMaps[0], backgrounds[0], names, 10, 9.81);
	levels[1] = Level(names[1], heightMaps[1], backgrounds[1], names, 10, 9.81);
	levels[2] = Level(names[2], heightMaps[2], backgrounds[2], names, 10, 9.81);
}

Game::~Game()
{
	delete[] levels;
	levels = NULL;
}

void Game::init(int i) {
	//Pass level to render and physics
	
}

void Game::update() {

}

void Game::onKeyDown(int) {

}
