#include "CurieTimerOne.h"

volatile bool lighting= true;
int time = 1000000;

void Blink() {
  digitalWrite(13, lighting);
  lighting = !lighting;
}

void setup() {
  pinMode(13, OUTPUT);
  // 开启定时器中断
  CurieTimerOne.start(time, Blink);
}

void loop() {
}
