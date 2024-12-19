#pragma once
#include "ofMain.h"

class TalkSprite
{
public:
	ofImage Sprite;
	int posX = 50;
	int posY = 50;
	string dialogue;
	bool visible;

	//True to draw, false to hide. Uses 1, 2, or 3 to draw sprite position. 1 is left, 2 is middle, 3 is right.
	void drawSprite(bool visibility, int position);
};

