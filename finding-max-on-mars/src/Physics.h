#pragma once
#include "Position.h"
#include "ofImage.h"

class Physics
{
private:
	float gravity;
	float time;
	ofImage heightMap;
public:
	Physics();
	~Physics();
	bool checkCollision(Position, int);
	Position jump(Position, float);
	void init(float, ofImage);//gravit and heightMap
};

