/*
使用蜂鸣器与按键制作简易电子琴
奈何col
www.arduino.cn
*/
#include "pitches.h"

void setup() {
  // 初始化按键模块连接引脚
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
}

void loop() {
  // 依次读出各按键模块状态
  // 如果按键被按下，则发出相应的音色
  if(digitalRead(2)){
    tone(10, NOTE_C5,10); //Do(523Hz)
  }
  if(digitalRead(3)){
    tone(10, NOTE_D5,10); // Re (587Hz),
  }
  if(digitalRead(4)){
    tone(10, NOTE_E5, 10); // Mi(659Hz)
  }
  if(digitalRead(5)){
    tone(10, NOTE_F5, 10); //Fa(698Hz)
  }
  if(digitalRead(6)){
    tone(10, NOTE_G5, 10); //So(784Hz)
  }
  if(digitalRead(7)){
    tone(10, NOTE_A5, 10); //La(880Hz)
  }
  if(digitalRead(8)){
    tone(10, NOTE_B5, 10); //Si(988Hz)
  }
}
