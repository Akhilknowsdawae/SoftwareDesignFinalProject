#include "DialogueManager.h"

DialogueManager::DialogueManager()
    : fullText(""), currentText(""), currentIndex(0), typewriterSpeed(0.05f), typewriterTimer(0.0f),
    isDisplayingText(false) {}

void DialogueManager::say(const std::string& text) {
    dialogues.push(text); // Add the dialogue to the queue
    if (!isDisplayingText) {
        startNextDialogue(); // Start the first dialogue immediately
    }
}

void DialogueManager::startNextDialogue() {
    if (!dialogues.empty()) {
        fullText = dialogues.front(); // Get the next dialogue
        dialogues.pop();
        currentText = "";
        currentIndex = 0;
        typewriterTimer = 0.0f;
        isDisplayingText = true;
    }
}

void DialogueManager::update() {
    if (isDisplayingText && currentIndex < fullText.length()) {
        typewriterTimer += ofGetLastFrameTime();
        if (typewriterTimer >= typewriterSpeed) {
            typewriterTimer = 0.0f;
            currentIndex++;
            currentText = fullText.substr(0, currentIndex); // Reveal characters
        }
    }
    else if (currentIndex >= fullText.length()) {
        isDisplayingText = false; // Stop typewriter effect
    }
}

void DialogueManager::draw(int x, int y, int maxWidth) {
    // Set text color and draw current dialogue
    //ofSetColor(0); // Black color
    ofDrawBitmapString(currentText, x, y);

    //Add text-wrapping logic if needed
}

void DialogueManager::onKeyPressed(int key) {
    if (key == OF_KEY_RETURN && !isDisplayingText) { // When Enter is pressed
        startNextDialogue(); // Load the next dialogue
    }
}