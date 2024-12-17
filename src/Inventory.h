#pragma once
#include "ofMain.h"
#include <vector>
#include <string>
#include <memory>

using namespace std;

class Item {
public:
	Item(const string& itemName, const string& itemDescription);
	string getName();
	string getDescription();

private:
	string name;
	string description;
};

class Inventory {
public:
	void addItem(const shared_ptr<Item>& item);
	bool removeItem(const string& itemName);
	void displayInventory();
	bool hasItem(const string& itemName);

private:
	vector<shared_ptr<Item>> items;
};