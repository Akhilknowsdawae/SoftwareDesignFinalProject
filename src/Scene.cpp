#include "Scene.h"
#include <Constants.h>

//Constructor
Scene::Scene() {

}

void Scene::setup() {
    // Add setup logic for the scene if needed
}

void Scene::update() {
    dialogueManager.update(); // Update the dialogue manager
}

void Scene::draw() {
    // Draw dialogue for this scene
    ofSetColor(0);//Sets text black
    dialogueManager.draw((ofGetWindowWidth() / 2) - 300, (ofGetWindowHeight() / 2) + Constants::TXTBOX, ofGetWidth() - 200); // Example position
    ofSetColor(255);//Resets colour for rest of the scene elements
}