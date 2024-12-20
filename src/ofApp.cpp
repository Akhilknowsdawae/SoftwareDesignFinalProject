#include "ofApp.h"
#include "Constants.h"

//--------------------------------------------------------------
void ofApp::setup(){
	Scene1.setup();

	Scene1.Background.BackgroundSprite.load(Constants::BACKGROUND);
	Scene1.Dialogue.Box.load(Constants::TEXTBOX);
	Scene1.SpriteMiddle.Sprite.load("TalkSpriteTemplate.png");
	Scene1.CentrePoint.load("CENTREPOINT.png");
	Scene1.SoundplayerExample.BGTrack.load("BGMUSIC.mp3");
	Scene1.SoundplayerExample.ExampleSFX.load("MOUSECLICK.mp3");
	Scene1.SoundplayerExample.TextSFX.load("TEXTSFX.mp3");	
	
	Scene2.Background.BackgroundSprite.load("BACKGROUND_2.png");
	Scene2.Dialogue.Box.load("TEXTBOX_2.png");
	Scene2.SpriteLeft.Sprite.load("TalkSpriteTemplate.png");
	Scene2.SpriteRight.Sprite.load("TalkSpriteTemplate_2.png");
	Scene2.CentrePoint.load("CENTREPOINT.png");
	Scene2.SoundplayerExample.BGTrack.load("BGMUSIC.mp3");
	Scene2.SoundplayerExample.ExampleSFX.load("MOUSECLICK.mp3");
	Scene2.SoundplayerExample.TextSFX.load("TEXTSFX.mp3");
	ofSetRectMode(OF_RECTMODE_CENTER);

	// Initialize current scene
	currentScene = 1;

	// Setup dialogues for Scene 1
	Scene1.dialogueManager.say("Welcome to the game! Hit enter to move to the next bit of example dialogue!");
	Scene1.dialogueManager.say(" This is the first scene of 2 in this example.");
	Scene1.dialogueManager.say("You can have as many as you like!");
	Scene1.dialogueManager.say("Now lets go to the next scene.");

	// Setup dialogues for Scene 2
	Scene2.dialogueManager.say("Welcome to Scene 2!");
	Scene2.dialogueManager.say("Here’s another example dialogue. This time I have a friend!");
	Scene2.dialogueManager.say("Music and sound effects can be triggered between scenes!");
	Scene2.dialogueManager.say("That's why the music can continue!");
	Scene2.dialogueManager.say("Well, thats the end of the example. Happy coding!");
	
	Scene1.SoundplayerExample.BGTrack.play();

}

//--------------------------------------------------------------
void ofApp::update(){
	// Update dialogues based on the current scene
	if (currentScene == 1) {
		Scene1.update();

	}
	else if (currentScene == 2) {
		Scene2.update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);

	// Draw the current scene
	if (currentScene == 1) {
		Scene1.CentrePoint.draw(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
		Renderer.drawSprite(Scene1.Background.BackgroundSprite, true);
		Renderer.drawSprite(Scene1.SpriteMiddle.Sprite, Scene1.SpriteLeft.visible, 2);
		Renderer.drawSprite(Scene1.Dialogue.Box, true, 4);
		Scene1.draw();

	}
	else if (currentScene == 2) {
		Scene2.CentrePoint.draw(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
		Renderer.drawSprite(Scene2.Background.BackgroundSprite, true);
		Renderer.drawSprite(Scene2.SpriteLeft.Sprite, Scene1.SpriteLeft.visible, 1);
		Renderer.drawSprite(Scene2.SpriteRight.Sprite, Scene1.SpriteRight.visible, 3);
		Renderer.drawSprite(Scene2.Dialogue.Box, true, 4);
		Scene2.draw();

	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	// Let the current scene handle dialogue progression
	if (currentScene == 1) {
		if (!Scene1.dialogueManager.isDisplayingText && Scene1.dialogueManager.dialogues.empty()) {
			currentScene = 2; // Move to Scene 2 after all Scene 1 dialogues finish
			Scene2.SoundplayerExample.ExampleSFX.play();
		}
		Scene1.dialogueManager.onKeyPressed(key);
		Scene1.SoundplayerExample.TextSFX.play();

	}
	else if (currentScene == 2) {
		Scene2.dialogueManager.onKeyPressed(key);
		Scene1.SoundplayerExample.TextSFX.play();

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
