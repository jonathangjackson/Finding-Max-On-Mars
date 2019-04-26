#include "Game.h"

Game::Game()
{
	ofImage *playerImg;
	playerImg = new ofImage[1];
	playerImg[0].load("max.png");
	
	Position start;
	start.setPostion(0, 500);

	max = new Player(Position(start), playerImg, 1);
	max->getPos().setPostion(500.0f, 0.0f);
	cout << max->getPos().getX() << endl;

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

	phys.setPhysics(levels[0]);
}

Game::~Game()
{
	//delete[] levels;
	//levels = NULL;
}

void Game::init(int i) {
	//Pass level to render and physics
	ren.loadLevel(levels[i]);
	phys.init(0.5, levels[i].getHeightMap());
}

void Game::update() {
	if (phys.isJumpCheck()) {
		if (!phys.checkCollision(max->getPos(), 2)) {
			Position j = phys.jump(max->getPos());
			max->getPos().setPostion(0, max->getPos().getY() - j.getY());
		}
		else {
			phys.setJumpCheck();
		}
	}
	phys.enemyBuffer();
}

void Game::onKeyDown(int k) {
	//dir: 0 - Right, 1 - Left, 2 - Up, 3 - down
	switch (k) {
	case 57358:
		if (!phys.checkCollision(max->getPos(), 0)) {
			max->getPos().setPostion(10, 0);
		}
		if (!phys.checkCollision(max->getPos(), 2) && !phys.isJumpCheck()) {
			do {
				max->getPos().setPostion(0, 10);
			} while (!phys.checkCollision(max->getPos(), 2));
		}
		break;
	case 57356:
		if (!phys.checkCollision(max->getPos(), 1)) {
			max->getPos().setPostion(-10, 0);
		}
		if (!phys.checkCollision(max->getPos(), 2) && !phys.isJumpCheck()) {
			do {
				max->getPos().setPostion(0, 10);
			} while (!phys.checkCollision(max->getPos(), 2));
		}
		break;
	case 32: 
		cout << "SPACE BAR" << endl;
		if (!phys.isJumpCheck()) {
			Position j = phys.jump(max->getPos());
			max->getPos().setPostion(0, max->getPos().getY() - j.getY());
		}
		break;
	}
	//max.getPos().setPostion();
}

void Game::draw() {
	ren.drawBG();
	ren.drawFG();
	ren.drawFG(*max);
}