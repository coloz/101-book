
/*
使用u8g2显示数据
图形显示器：OpenJumper 12864 OLED
设备核心：SSD1306
控制器：Genuino 101
*/
#include <U8g2lib.h>

#define rst  2
U8G2_SSD1306_128X64_NONAME_F_HW_I2C  u8g2(U8G2_R0 , rst);
int n=0;
char str[9];

void setup(void) {
  u8g2.begin();
  u8g2.setFont(u8g2_font_ncenB14_tr);
}

void loop(void) {
  u8g2.clearBuffer();

// 使用drawStr输出数据，需将数据先转换成字符串
  u8g2.drawStr(0, 14, "drawStr:");
  itoa(n,str,10);
  u8g2.drawStr(90, 14, str);	
  u8g2.setCursor(0, 55);
  
//使用print输出数据，需先使用setCursor函数设置显示位置
  u8g2.print("print:");
  u8g2.setCursor(90, 55);
  u8g2.print(n);

  u8g2.sendBuffer();
  delay(1000);
n++;
}
