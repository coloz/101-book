#include "CurieIMU.h"
int ax, ay, az;
int gx, gy, gz;

void setup() {
  Serial.begin(9600);
  while (!Serial);
  CurieIMU.begin();
}

void loop() {
  // 读取IMU数据
  CurieIMU.readMotionSensor(ax, ay, az, gx, gy, gz);

  // 其他读取方式
//CurieIMU.readAccelerometer(ax, ay, az)
//CurieIMU.readGyro(gx, gy, gz)

  //ax = CurieIMU.readAccelerometer(X_AXIS);
  //ay = CurieIMU.readAccelerometer(Y_AXIS);
  //az = CurieIMU.readAccelerometer(Z_AXIS);
  //gx = CurieIMU.readGyro(X_AXIS);
  //gy = CurieIMU.readGyro(Y_AXIS);
  //gz = CurieIMU.readGyro(Z_AXIS);

  // 串口输出数据
  Serial.print("a/g:\t");
  Serial.print(ax);
  Serial.print("\t");
  Serial.print(ay);
  Serial.print("\t");
  Serial.print(az);
  Serial.print("\t");
  Serial.print(gx);
  Serial.print("\t");
  Serial.print(gy);
  Serial.print("\t");
  Serial.println(gz);
}
