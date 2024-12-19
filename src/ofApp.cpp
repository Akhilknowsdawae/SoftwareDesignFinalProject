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

	textToShow = "This stupid thing better work or I'll burn this program down.";
	currentText = "";  // Initially, no text is displayed
	currentIndex = 0;  // Start at the beginning of the text
	fadeSpeed = 50.0f; // Speed of fade-in effect
	fadeTimer = 0.0f;  // Reset the fade timer
	alpha = 0;         // Start with fully transparent text

}

//--------------------------------------------------------------
void ofApp::update(){
	// If not all characters are displayed, show one character
	if (currentIndex < textToShow.length()) {
		currentIndex++;
		currentText = textToShow.substr(0, currentIndex);  // Update currentText

		// Update fade effect gradually (alpha increases)
		fadeTimer += ofGetLastFrameTime() * fadeSpeed;
		alpha = ofClamp(static_cast<int>(fadeTimer), 0, 255); // Control alpha transparency
	}
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

	ofPushMatrix;
		// Set the text color with transparency for fade-in effect
		ofSetColor(255, 255, 255, alpha);

		// Calculate text position to center it
		int x = (ofGetWidth() / 2) - (currentText.size() * 4); // Approximate centering (adjust factor if needed)
		int y = ofGetHeight() / 2;

		// Draw the text progressively (typewriter effect)
		ofDrawBitmapString(currentText, x, y);
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
