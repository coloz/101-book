/*
Curie RTC例程
http://www.arduino.cn/
*/

#include <CurieTime.h>

void setup() {
  while (!Serial);
  Serial.begin(9600);

  // 将时间设为2016年6月25日18点27分
  setTime(18, 27, 00, 24, 6, 2016);
}

void loop() {
  Serial.print("Time now is: ");

  print2digits(hour());
  Serial.print(":");
  print2digits(minute());
  Serial.print(":");
  print2digits(second());

  Serial.print(" ");

  Serial.print(day());
  Serial.print("/");
  Serial.print(month());
  Serial.print("/");
  Serial.print(year());

  Serial.println();

  delay(1000);
}
// 生成占位用的字符“0”
void print2digits(int number) {
  if (number >= 0 && number < 10) {
    Serial.print('0');
  }
  Serial.print(number);
}
