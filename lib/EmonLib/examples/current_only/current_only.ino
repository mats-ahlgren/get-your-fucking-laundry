// EmonLibrary examples openenergymonitor.org, Licence GNU GPL V3

#include "EmonLib.h"                   // Include Emon Library
EnergyMonitor emon1;                   // Create an instance

float startTime;

void setup()
{
	Serial.begin(9600);

	emon1.current(1, 111.1);             // Current: input pin, calibration.

	startTime = millis();
}

void loop()
{
	double Irms = emon1.calcIrms(1480);  // Calculate Irms only
  Serial.println(Irms);

  delay(100);

}