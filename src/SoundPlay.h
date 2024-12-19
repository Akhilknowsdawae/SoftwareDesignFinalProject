#pragma once

#include "ofMain.h"

class SoundPlay
{
	public:
		ofSoundPlayer   BGTrack;
		ofSoundPlayer	TextSFX;
		ofSoundPlayer	ExampleSFX;

		float BgVolume = 100;
		float TxtVolume = 100;
		float SfxVolume = 100;

		//void playSound(ofSoundPlayer sound, float volume);

};

