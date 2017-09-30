
#include <EEPROM.h>

void setup() {
  // initialize the LED pin as an output.
  pinMode(13, OUTPUT);
   
  EEPROM.clear();
 
  // turn the LED on when we're done
  digitalWrite(13, HIGH);
}
 
void loop() {
  /** Empty loop. **/
}
