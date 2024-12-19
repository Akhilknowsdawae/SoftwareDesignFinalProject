#include "BgImg.h"

#include "ofApp.h"
#include "ofMain.h"

void BgImg::drawSprite(bool visibility)
{
	if (visibility == true)
	{
		BackgroundSprite.draw(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
	}
}