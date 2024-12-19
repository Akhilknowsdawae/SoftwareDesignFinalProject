#pragma once

#include "ofMain.h"

class TextBox
{
public:
	ofImage Box;
	bool visible;

	//True to draw, false to hide. 
	void drawSprite(bool visibility);
};


