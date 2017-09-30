/*
Genuino 101软串口通信
通过listen()切换监听软串口
*/

#include <SoftwareSerial.h>
SoftwareSerial portOne(10, 11);
SoftwareSerial portTwo(8, 9);

void setup() {
  Serial.begin(9600);
  while (!Serial) {
  }

  portOne.begin(9600);
  portTwo.begin(9600);
}

void loop() {
//监听1号软串口
  portOne.listen();

  Serial.println("Data from port one:");
  while (portOne.available() > 0) {
    char inByte = portOne.read();
    Serial.write(inByte);
  }

  Serial.println();
//监听2号软串口
  portTwo.listen();

  Serial.println("Data from port two:");
  while (portTwo.available() > 0) {
    char inByte = portTwo.read();
    Serial.write(inByte);
  }

  Serial.println();
}
