#pragma once
#include "ofMain.h"
#include "ofApp.h"


class Render
{
public:

	//True to draw, false to hide. Uses 1-4 to draw sprite position. 1 is left, 2 is middle, 3 is right, 4 is dialogue box.
	void drawSprite(ofImage img, bool visibility, int position);

	//True to draw, false to hide. 
	void drawSprite(ofImage img, bool visibility);

};

