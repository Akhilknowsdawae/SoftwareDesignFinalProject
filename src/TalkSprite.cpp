#include "TalkSprite.h"
#include "ofApp.h"
#include "ofMain.h"

void TalkSprite::drawSprite(bool visibility, int position)
{
	if (visibility == true)
	{
		if (position == 1)
		{
			TalkSprite::Sprite.draw((ofGetWindowWidth() / 2) + Constants::SCLEFT, ofGetWindowHeight() / 2);
		}
		else if (position == 2)
		{
			TalkSprite::Sprite.draw((ofGetWindowWidth() / 2), ofGetWindowHeight() / 2);
		}
		else if (position == 3)
		{
			TalkSprite::Sprite.draw((ofGetWindowWidth() / 2) + Constants::SCRIGHT, ofGetWindowHeight() / 2);
		}
	}
}
