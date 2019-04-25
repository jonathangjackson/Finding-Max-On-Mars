#include "Physics.h"



Physics::Physics()
{
	isJump = false;
	velocity = 10;
}


Physics::~Physics()
{
}

bool Physics::checkCollision(Position p, int dir) {

	ofColor black = ofColor(0, 0, 0);

	switch (dir) {
	case 0:
		if (pixels.getColor(p.getX() + 100, p.getY() + 100) == black) {
			return true;
		}
		//RIGHT
		break;
	case 1:
		//Left

		if (pixels.getColor(p.getX(), p.getY() + 100) == black) {
			return true;
		}
		break;
	case 2:
		if (pixels.getColor(p.getX(), p.getY() + 110) == black) {
			return true;
		}
		if (pixels.getColor(p.getX() + 100, p.getY() + 110) == black) {
			return true;
		}
		break;
	}
	return false;
}

Position Physics::jump(Position p) {
	if (!isJump) {
		time = 1;
		isJump = true;
	}
	if (checkCollision(p, 2) && time > 1) {
		isJump = false;
	}
	else {
		p.setPostion(0, velocity);      // Apply horizontal velocity to X position
		time += 0.1;
		velocity += -gravity;
	}
	return p;
}

void Physics::init(float g, ofImage hm) {
	this->gravity = g;
	this->heightMap = hm;


	pixels = heightMap.getPixels();
	pixels.setImageType(OF_IMAGE_GRAYSCALE);
	pixels = pixels.getChannel(0);
}

bool Physics::isJumpCheck() {
	return isJump;
}

void Physics::setJumpCheck() {
	isJump = false;
	velocity = 10;
	time = 0;
}