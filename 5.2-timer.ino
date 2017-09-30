#include "CurieTimerOne.h"

void setup() {
  // 设置13号引脚输出PWM信号, 占空比为50%，周期为2秒（2000000微秒）。
  CurieTimerOne.pwmStart(13, 50.0, 2000000);

  // 当第二个参数为int型时，用0-1023的数值表示占空比
  // 例如512代表约50%的占空比
  // CurieTimerOne.pwmStart(13, 512, 2000000);
}

void loop() {
  delay( 10000 );
}
