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

	// Initialize current scene
	currentScene = 1;

	// Setup dialogues for Scene 1
	Scene1.dialogueManager.say("Cha maganera");
	Scene1.dialogueManager.say("Track them to the end");

	// Setup dialogues for Scene 2
	Scene2.dialogueManager.say("Welcome to Scene 2!");
	Scene2.dialogueManager.say("Here’s another example dialogue.");
	
	Scene1.SoundplayerExample.BGTrack.play();

}

//--------------------------------------------------------------
void ofApp::update(){
	// Update dialogues based on the current scene
	if (currentScene == 1) {
		Scene1.update();

		// Example condition to move to Scene 2
		if (!Scene1.dialogueManager.isDisplayingText && !Scene1.dialogueManager.dialogues.empty()) {
			currentScene = 2; // Hardcoded transition
		}
	}
	else if (currentScene == 2) {
		Scene2.update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);

	ofPushMatrix;
	Scene1.CentrePoint.draw(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
	ofPopMatrix;
	ofPushMatrix;
	Renderer.drawSprite(Scene1.Background.BackgroundSprite, true);
	ofPopMatrix;
	ofPushMatrix;
	Renderer.drawSprite(Scene1.SpriteLeft.Sprite, true, 1);
	ofPopMatrix;
	ofPushMatrix;
	Renderer.drawSprite(Scene1.SpriteRight.Sprite, true, 3);
	ofPopMatrix;
	ofPushMatrix;
	Renderer.drawSprite(Scene1.Dialogue.Box, true, 4);
	ofPopMatrix;

	// Draw the current scene
	if (currentScene == 1) {
		Scene1.draw();
	}
	else if (currentScene == 2) {
		Scene2.draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	// Let the current scene handle dialogue progression
	if (currentScene == 1) {
		Scene1.dialogueManager.onKeyPressed(key);
	}
	else if (currentScene == 2) {
		Scene2.dialogueManager.onKeyPressed(key);
	}
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
