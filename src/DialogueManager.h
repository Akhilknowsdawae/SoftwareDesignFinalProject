#pragma once
#include "ofMain.h"
#include <queue>
#include <functional>

class DialogueManager {
public:
    //Variables
    std::queue<std::string> dialogues; // Queue of dialogues to display
    std::string fullText;              // The complete text of the current dialogue
    std::string currentText;           // Text currently being displayed
    int currentIndex;                  // Current index of the character to render
    float typewriterSpeed;             // Speed of the typewriter effect
    float typewriterTimer;             // Timer for typewriter rendering
    bool isDisplayingText;             // Whether a message is being typed out

    //Constructor
    DialogueManager();

    //Functions
    void say(const std::string& text);
    void update();
    void draw(int x, int y, int maxWidth);
    void onKeyPressed(int key);

private:
    void startNextDialogue();
};