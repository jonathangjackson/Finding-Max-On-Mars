#pragma once
#include "Position.h"
#include "ofFbo.h"
#include "ofImage.h"
#include "ofRectangle.h"
#include "ofGraphics.h"
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
	ofFbo eBuffer;
public:
	Physics();
	~Physics();
	bool checkCollision(Position, int);
	Position jump(Position);
	void init(float, ofImage);//gravit and heightMap
	bool isJumpCheck();
	void setJumpCheck();

	ofImage enemyBuffer();
};

