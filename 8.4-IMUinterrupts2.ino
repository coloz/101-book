#include "CurieIMU.h"

bool state=false;
void setup() {
  pinMode(13,OUTPUT);
  CurieIMU.begin();
  CurieIMU.attachInterrupt(eventCallback);
 
  // Increase Accelerometer range to allow detection of stronger taps (< 16g)
  CurieIMU.setAccelerometerRange(32);
  CurieIMU.setAccelerometerRate(1600);
 
  // Reduce threshold to allow detection of weaker taps (>= 100mg)
  CurieIMU.setDetectionThreshold(CURIE_IMU_TAP, 100); 
 
  // Enable Tap detection
  CurieIMU.interrupts(CURIE_IMU_TAP);
}
 
void loop() {
}
 
static void eventCallback()
{
  if (CurieIMU.getInterruptStatus(CURIE_IMU_TAP)) {
    state =!state;
    digitalWrite(13,state);
  }
}
