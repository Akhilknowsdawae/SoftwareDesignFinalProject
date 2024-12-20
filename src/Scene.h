#pragma once

#include "ofMain.h"
#include "TextBox.h"
#include "BgImg.h"
#include "TalkSprite.h"
#include "SoundPlay.h"
#include "DialogueManager.h"

class Scene
{
public:
    //Background image. Should only be one.
	BgImg Background;

    //Talk sprites! SpriteLeft and SpriteRight are examples. 
    //You can have up to 3 of these showing in one scene.
	TalkSprite SpriteLeft, SpriteRight;

    //Dialogue box background sprite. 
    //Should only have one, and displays in front of the characters.
	TextBox Dialogue;

    //Just a simple box sprite you can use to measure screen centre. 
	ofImage CentrePoint;

    //Stores sound effects to be played! 
    //By default, stores one background track, one text appearing sound, an one example effect.
    SoundPlay SoundplayerExample;

    DialogueManager dialogueManager;

    // Position for dialogue text
    int dialogueX, dialogueY, dialogueWidth;

    // State variables for dialogue text
    string fullText;       // Full text to display
    string currentText;    // Text currently being displayed
    int currentIndex;      // Index of the next character to display
    float fadeSpeed;       // Speed for typewriter fade-in
    float fadeTimer;       // Timer for character rendering
    bool isDisplayingText; // Whether text animation is active

    // Constructors
    Scene();

    //Functions
    void setup();
    void update();
    void draw();
};

