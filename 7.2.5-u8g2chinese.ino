/*
使用u8g2显示中文
图形显示器：OpenJumper 12864 OLED
设备核心：SSD1306
控制器：Genuino 101
*/

#include <U8g2lib.h>

#define rst  2
U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C  u8g2(U8G2_R0 , rst);

void setup(void) {
  u8g2.begin();
  u8g2.enableUTF8Print();		// 开启UTF8字符输出功能
}

void loop(void) {
  u8g2.setFont(u8g2_font_unifont_t_chinese3);
  u8g2.clearBuffer();
  u8g2.drawStr(15, 20, "你好世界");
  u8g2.sendBuffer();
  delay(1000);
}
