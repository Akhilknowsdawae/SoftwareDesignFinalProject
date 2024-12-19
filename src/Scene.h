#pragma once

#include "ofMain.h"
#include "TextBox.h"
#include "BgImg.h"
#include "TalkSprite.h"

class Scene
{
public:
	BgImg Background;
	TalkSprite SpriteLeft;
	TalkSprite SpriteRight;
	TextBox Dialogue;
	ofImage CentrePoint;

	float ScreenCentreX = 480;
	float ScreenCentreY = 320;

    // Position for dialogue text
    int dialogueX, dialogueY, dialogueWidth;

    // State variables for dialogue text
    string fullText;       // Full text to display
    string currentText;    // Text currently being displayed
    int currentIndex;      // Index of the next character to display
    float fadeSpeed;       // Speed for typewriter fade-in
    float fadeTimer;       // Timer for character rendering
    bool isDisplayingText; // Whether text animation is active

    // Methods
    Scene();
    void setup();
    void display_dialogue(const string& text, float speed);
    void update();
    void draw_text();
};

