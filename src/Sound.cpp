#include "Sound.h"
#include "ofMain.h"

void Sound::playSound(ofSoundPlayer sound, float volume)
{
	sound.setVolume(volume);
	sound.play();
}
