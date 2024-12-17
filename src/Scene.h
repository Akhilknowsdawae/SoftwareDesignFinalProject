#pragma once

#include "ofMain.h"
#include "TextBox.h"
#include "Scene.h"
#include "BgImg.h"
#include "TalkSprite.h"

class Scene
{
public:
	BgImg Background;
	TalkSprite SpriteLeft;
	TalkSprite SpriteRight;
	TextBox Dialogue;

	float ScreenCentreX = 480;
	float ScreenCentreY = 320;
};

