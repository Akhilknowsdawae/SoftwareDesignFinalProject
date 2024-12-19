#include "TextBox.h"

#include "ofApp.h"
#include "ofMain.h"

void TextBox::drawSprite(bool visibility)
{
	if (visibility == true)
	{
		Box.draw(ofGetWindowWidth() / 2, (ofGetWindowHeight() / 2) + Constants::TXTBOX);
	}
}
