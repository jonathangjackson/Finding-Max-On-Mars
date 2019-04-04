#include "Position.h"



Position::Position()
{
	this->y = 0;
	this->x = 0;
}


Position::~Position()
{
}


void Position::setPostion(float a, float b) {
	this->x += a;
	this->y += b;
}

float Position::getX() {
	return this->x;
}
float Position::getY() {
	return this->y;
}

bool Position::inFrame() {
	if (this->x < 0 || this->x > 1024) {
		return false;
	}
	if (this->y < 0 || this->y > 768) {
		return false;
	}
	return true;
}