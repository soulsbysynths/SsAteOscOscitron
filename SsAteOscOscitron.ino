#include <AteOsc.h>
#include <AteOscEngineBase.h>
#include <AteOscHardwareBase.h>
#include <AtmAudio/AtmAudio.h>
#include <Wavetable/Wavetable.h>
#include <AteOscOscillator.h>
#include <AteOscPatch.h>
#include <AteOscPitch.h>
#include <SsHelpers.h>
//#include <BiquadFilter.h>
#include <BiquadFilterFM.h>
#include <Portamento.h>
#include <QuantizePitch.h>
#include <AtmPitch.h>
#include <Wavecrusher.h>
#include <Flanger.h>
#include <Pwm.h>
#include <LedRgb.h>
#include <LedCircular.h>
#include <CvInput.h>
#include <Switch.h>
#include <RotaryEncoder.h>
#include <FixedMath/FixedMath.h>

AteOsc oscitron;

void setup()
{
	//Serial.begin(9600);
	oscitron.initialize();

}

void loop()
{
	static unsigned long last_millis;
	unsigned char ticksPassed = millis() - last_millis;
	last_millis += ticksPassed;
	oscitron.poll(ticksPassed);
		//static unsigned long lastUs = 0;
		//unsigned long us = micros();
		//Serial.println(us - lastUs);
		//lastUs = micros();
}
