#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofFbo f;
	findMax.init(0);
}

//--------------------------------------------------------------
void ofApp::update(){
	findMax.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	//call renderer
	findMax.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	findMax.onKeyDown(key);
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}
