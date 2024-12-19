#pragma once

#include "ofMain.h"
#include "TextBox.h"
#include "BgImg.h"
#include "TalkSprite.h"
#include "SoundPlay.h"

class Scene
{
public:
	BgImg Background;
	TalkSprite SpriteLeft;
	TalkSprite SpriteRight;
	TextBox Dialogue;
	ofImage CentrePoint;
    SoundPlay SoundplayerExample;

	float ScreenCentreX = 480;
	float ScreenCentreY = 320;
};

