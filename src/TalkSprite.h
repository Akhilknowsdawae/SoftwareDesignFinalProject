#pragma once
#include "ofMain.h"

class TalkSprite
{
public:
	TalkSprite(const string& name);
	string getName() const;

	ofImage Sprite;
	string dialogue;

protected:
	string name;
	int posX = 50;
	int posY = 50;
};

