#pragma once

#include "ofMain.h"
#include "Game.h"

class ofApp : public ofBaseApp{
	private:
		Game findMax;
	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void windowResized(int w, int h);
};
