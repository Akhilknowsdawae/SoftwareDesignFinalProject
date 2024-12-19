#include "Scene.h"
#include <Constants.h>

Scene::Scene()
    : fullText(""), currentText(""), currentIndex(0), fadeSpeed(0.0f), fadeTimer(0.0f), isDisplayingText(false) {}

// Initialize default values
void Scene::setup() {
    fullText = "";
    currentText = "";
    currentIndex = 0;
    fadeSpeed = 0.0f;
    fadeTimer = 0.0f;
    isDisplayingText = false;
}

// Start displaying dialogue with the given text and fade-in speed
void Scene::display_dialogue(const string& text, float speed) {
    fullText = text;
    currentText = "";
    currentIndex = 0;
    fadeSpeed = speed;
    fadeTimer = 0.0f;
    isDisplayingText = true;
}

// Update the typewriter animation
void Scene::update() {
    if (isDisplayingText && currentIndex < fullText.length()) {
        fadeTimer += ofGetLastFrameTime() * fadeSpeed; 
        if (fadeTimer >= 1.0f) {
            currentIndex++; // Reveal the next character
            fadeTimer = 0.0f; // Reset the timer
            currentText = fullText.substr(0, currentIndex);
        }
    }

    if (currentIndex >= fullText.length()) {
        isDisplayingText = false; // Stop animation when text is complete
    }
}

// Draw the text in the existing text box
void Scene::draw_text() {
    // Set position and width to align within the textbox
    float textX = ofGetWindowWidth() / 2; // Centered relative to the textbox
    float textY = (ofGetWindowHeight() / 2) + Constants::TXTBOX - 20;

    // Render the text over the backdrop
    ofSetColor(0); // White color
    ofDrawBitmapString(currentText, textX, textY);
    ofSetColor(255);
}