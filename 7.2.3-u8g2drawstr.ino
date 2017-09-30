
/*
使用u8g2显示字符串
图形显示器：OpenJumper 12864 OLED
设备核心：SSD1306
控制器：Genuino 101
*/

#include <U8g2lib.h>

#define rst  2
U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C  u8g2(U8G2_R0 , rst);

void setup(void) {
  u8g2.begin();
}

void loop(void) {
  u8g2.clearBuffer();				   // 清空缓冲区
  u8g2.setFont(u8g2_font_ncenB14_tr);  // 选择一个合适的字体
  u8g2.drawStr(0 , 15 , "Hello World!");   // 将数据存在缓冲区
  u8g2.sendBuffer();				   // 显示缓冲区内容
  delay(1000);  
}
