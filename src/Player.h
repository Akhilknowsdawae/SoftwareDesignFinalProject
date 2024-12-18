#pragma once
#include "TalkSprite.h"
#include "Inventory.h"

using namespace std;

class Player : public TalkSprite {
public:
    Player(const string& name);
    void addItemToInventory(const string& itemName, const string& description);
    void removeItemFromInventory(const string& itemName);
    void showInventory() const;
    bool checkItem(const string& itemName) const;

private:
    Inventory inventory; // Composition: Player contains an Inventory
};