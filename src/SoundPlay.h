#pragma once

#include "ofMain.h"

class SoundPlay
{
	public:
		//Example sound effect!
		//BG Track directly references an audio file called "BGMUSIC.MP3"
		ofSoundPlayer   BGTrack;
		//Example sound effect!
		//TextSFX directly references an audio file called "TEXTSFX.MP3"
		ofSoundPlayer	TextSFX;
		//Example sound effect!
		//ExampleSFX currently references an audio file called "MOUSECLICK.MP3". Change this if you want!
		ofSoundPlayer	ExampleSFX;

		//Currently unused
		//float BgVolume = 100;
		//float TxtVolume = 100;
		//float SfxVolume = 100;
};

