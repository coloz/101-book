/*
Arduino 101 SPI Flash写文件
奈何col 2017.1.11
www.arduino.cn
*/

#include <SerialFlash.h>
#include <SPI.h>

// 文件大小
#define FSIZE 256
// 文件名
const char *filename = "Arduino101.txt";
// 文件内容
const char *contents = "The groundbreaking Intel Curie module expands the possibilities of what tech can do.";
// 片选引脚
const int FlashChipSelect = 21; 
 
void setup() {
  Serial.begin(9600);
  while (!Serial) ;
  delay(500);
  // 初始化SPI Flash芯片
  SerialFlash.begin(FlashChipSelect);

  // 如果文件已存在，则输出提示
  // 如果文件不存在，则创建文件并写入
  if(SerialFlash.exists(filename)) {
    Serial.println("File " + String(filename) + " already exists");
  }
  else {
    Serial.println("Creating file " + String(filename));
    SerialFlash.create(filename, FSIZE);
    // 新建SerialFlashFile对象用于文件操作
    SerialFlashFile file;
    file = SerialFlash.open(filename);
    file.write(contents, strlen(contents) + 1);
    Serial.println("String \"" + String(contents) + "\" written to file " + String(filename));
  }
}

void loop() {
}
