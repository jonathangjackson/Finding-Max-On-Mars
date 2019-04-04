#include "Physics.h"



Physics::Physics()
{
}


Physics::~Physics()
{
}

bool Physics::checkCollision(Position p, int dir) {
	return true;
}

Position Physics::jump(Position p, float t) {
	return p;
}

void Physics::init(float g, ofImage hm) {
	this->gravity = g;
	this->heightMap = hm;
}
