/*
Arduino 101 SPI Flash读文件
奈何col 2017.1.11
www.arduino.cn
*/

#include <SerialFlash.h>
#include <SPI.h>

// 文件名 
const char *filename = "Arduino101.txt";
// 片选引脚
const int FlashChipSelect = 21;
 
void setup() {
  Serial.begin(9600);
  while (!Serial) ;
  delay(500);
  // 初始化SPI Flash芯片
  SerialFlash.begin(FlashChipSelect);

  // 如果文件不存在，则输出提示
  // 如果文件存在，则读取文件内容
  if(!SerialFlash.exists(filename)) {
    Serial.println("File " + String(filename) + " does not exist");
  }
  else {
SerialFlashFile file;
// 打开文件
    file = SerialFlash.open(filename);
    int len = file.size();
    char fileBuffer[len];
    // 读取文件，将内容存放于fileBuffer中
file.read(fileBuffer, len);
    Serial.println("file:" + String(filename));
    Serial.println("size:" + String(len) +" bytes");
    Serial.println("contents:\r\n" + String(fileBuffer));
  }
}
 
void loop() {
}
