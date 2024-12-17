#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	Scene1.Background.BackgroundSprite.load("BackgroundTemplate.png");
	Scene1.Dialogue.Box.load("TextBoxTemplate.png");
	Scene1.SpriteLeft.Sprite.load("TalkSpriteTemplate.png");
	Scene1.SpriteRight.Sprite.load("TalkSpriteTemplate.png");
	ofSetRectMode(OF_RECTMODE_CENTER);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(0);
	ofPushMatrix;
	Scene1.Background.BackgroundSprite.draw(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
	ofPopMatrix;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
