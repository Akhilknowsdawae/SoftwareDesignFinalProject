#include "ofApp.h"

void Render::drawSprite(ofImage img, bool visibility, int position)
{
	if (visibility == true)
	{
		if (position == 1)
		{
			img.draw((ofGetWindowWidth() / 2) + Constants::SCLEFT, ofGetWindowHeight() / 2);
		}
		else if (position == 2)
		{
			img.draw((ofGetWindowWidth() / 2), ofGetWindowHeight() / 2);
		}
		else if (position == 3)
		{
			img.draw((ofGetWindowWidth() / 2) + Constants::SCRIGHT, ofGetWindowHeight() / 2);
		}
		else if (position == 4)
		{
			img.draw(ofGetWindowWidth() / 2, (ofGetWindowHeight() / 2) + Constants::TXTBOX);
		}
	}
}


void Render::drawSprite(ofImage img, bool visibility)
{
	if (visibility == true)
	{
		img.draw(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
	}
}
