#include "Player.h"

Player::Player(const string& name) : TalkSprite(name) {}

void Player::addItemToInventory(const string& itemName, const string& description) {
    inventory.addItem(make_shared<Item>(itemName, description));
    ofLogNotice() << itemName << " added to inventory.";
}

void Player::removeItemFromInventory(const string& itemName) {
    if (inventory.removeItem(itemName)) {
        ofLogNotice() << itemName << " removed from inventory.";
    }
    else {
        ofLogNotice() << itemName << " not found in inventory.";
    }
}

void Player::showInventory() const {
    ofLogNotice() << getName() << "'s Inventory:";
    inventory.displayInventory();
}

bool Player::checkItem(const string& itemName) const {
    return inventory.hasItem(itemName);
}