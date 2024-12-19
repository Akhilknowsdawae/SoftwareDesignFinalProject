#include "ofApp.h"
#include "Constants.h"

//--------------------------------------------------------------
void ofApp::setup(){
	Scene1.Background.BackgroundSprite.load(Constants::BACKGROUND);
	Scene1.Dialogue.Box.load(Constants::TEXTBOX);
	Scene1.SpriteLeft.Sprite.load("TalkSpriteTemplate.png");
	Scene1.SpriteRight.Sprite.load("TalkSpriteTemplate.png");
	Scene1.CentrePoint.load("CENTREPOINT.png");
	ofSetRectMode(OF_RECTMODE_CENTER);

	// Set the initial dialogue
	Scene1.display_dialogue("Welcome to the visual novel! Press Enter to continue.", 5.0f);

}

//--------------------------------------------------------------
void ofApp::update(){
	Scene1.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);

	ofPushMatrix;
	Scene1.CentrePoint.draw(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
	ofPopMatrix;
	ofPushMatrix;
	Scene1.Background.BackgroundSprite.draw(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
	ofPopMatrix;
	ofPushMatrix;
	Scene1.SpriteLeft.Sprite.draw((ofGetWindowWidth() / 2 )+ Constants::SCLEFT, ofGetWindowHeight() / 2);
	ofPopMatrix;
	ofPushMatrix;
	Scene1.SpriteRight.Sprite.draw((ofGetWindowWidth() / 2) + Constants::SCRIGHT, ofGetWindowHeight() / 2);
	ofPopMatrix;
	ofPushMatrix;
	Scene1.Dialogue.Box.draw(ofGetWindowWidth() / 2, (ofGetWindowHeight() / 2)+ Constants::TXTBOX);
	ofPopMatrix;

	Scene1.display_dialogue("This is a sample dialogue message.", 5.0f);
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
