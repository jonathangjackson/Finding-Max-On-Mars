#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	findMax.init(0);
}

//--------------------------------------------------------------
void ofApp::update(){
	findMax.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	//call renderer
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	findMax.onKeyDown(key);
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}
