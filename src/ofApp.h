#pragma once

#include "ofMain.h"
#include "TextBox.h"
#include "Scene.h"
#include "BgImg.h"
#include "TalkSprite.h"
#include "Constants.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		Scene Scene1;


private:
	string textToShow;  // Full text to display
	string currentText; // Text currently shown on screen (typewriter effect)
	int currentIndex;   // Index of the next character to display
	float fadeSpeed;    // Speed of the fade-in effect
	float fadeTimer;    // Timer for the fade-in effect
	int alpha;          // Transparency for the text
};
