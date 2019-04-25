#pragma once
#include "Position.h"
#include "ofImage.h"
#include <iostream>
using namespace std;

class Physics
{
private:
	float gravity;
	float time;
	ofImage heightMap;
	ofPixels pixels;
	bool isJump;
	float velocity;
public:
	Physics();
	~Physics();
	bool checkCollision(Position, int);
	Position jump(Position);
	void init(float, ofImage);//gravit and heightMap
	bool isJumpCheck();
	void setJumpCheck();
};

