#include "ofApp.h"
#include "Constants.h"

//--------------------------------------------------------------
void ofApp::setup(){
	Scene1.setup();

	Scene1.Background.BackgroundSprite.load(Constants::BACKGROUND);
	Scene1.Dialogue.Box.load(Constants::TEXTBOX);
	Scene1.SpriteLeft.Sprite.load("TalkSpriteTemplate.png");
	Scene1.SpriteRight.Sprite.load("TalkSpriteTemplate.png");
	Scene1.CentrePoint.load("CENTREPOINT.png");
	Scene1.SoundplayerExample.BGTrack.load("BGMUSIC.mp3");
	Scene1.SoundplayerExample.ExampleSFX.load("MOUSECLICK.mp3");
	Scene1.SoundplayerExample.TextSFX.load("TEXTSFX.mp3");
	ofSetRectMode(OF_RECTMODE_CENTER);

	// Set the initial dialogue
	Scene1.display_dialogue("Welcome to the visual novel! Press Enter to continue.", 5.0f);
	
	Scene1.SoundplayerExample.BGTrack.play();

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
	Scene1.Background.drawSprite(true);
	ofPopMatrix;
	ofPushMatrix;
	Scene1.SpriteLeft.drawSprite(true, 1);
	ofPopMatrix;
	ofPushMatrix;
	Scene1.SpriteRight.drawSprite(true, 3);
	ofPopMatrix;
	ofPushMatrix;
	Scene1.Dialogue.drawSprite(true);
	ofPopMatrix;

	Scene1.draw_text();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	Scene1.SoundplayerExample.TextSFX.play();
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
	Scene1.SoundplayerExample.ExampleSFX.play();
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
