#include "Inventory.h"

// Item class implementation
Item::Item(const string& itemName, const string& itemDescription)
    : name(itemName), description(itemDescription) {}

string Item::getName() {
    return name;
}

string Item::getDescription() {
    return description;
}

// Inventory class implementation
void Inventory::addItem(const shared_ptr<Item>& item) {
    items.push_back(item);
}

bool Inventory::removeItem(const string& itemName) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if ((*it)->getName() == itemName) {
            items.erase(it);
            return true;
        }
    }
    return false;
}

void Inventory::displayInventory() {
    for (const auto& item : items) {
        ofLogNotice() << "Item: " << item->getName() << " - " << item->getDescription();
    }
}

bool Inventory::hasItem(const string& itemName) {
    for (const auto& item : items) {
        if (item->getName() == itemName) return true;
    }
    return false;
}