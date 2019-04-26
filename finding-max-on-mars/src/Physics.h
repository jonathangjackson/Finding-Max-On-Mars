#pragma once
#include "Level.h"
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
	Level *l;
public:
	Physics();
	~Physics();
	void setPhysics(Level);
	bool checkCollision(Position, int);
	Position jump(Position);
	void init(float, ofImage);//gravit and heightMap
	bool isJumpCheck();
	void setJumpCheck();

	void enemyBuffer();
};

