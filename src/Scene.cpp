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
    dialogueManager.draw(100, 100, ofGetWidth() - 200); // Example position
}