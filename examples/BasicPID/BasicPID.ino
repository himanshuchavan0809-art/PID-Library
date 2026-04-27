#include <MPU6050_light.h>
#include <Wire.h>
#include<PID.h>

int count=0;
PID Encoder_PID;
PID Gyro_PID;
MPU6050 mpu(Wire);

void setup() {
  Serial.begin(115200);
  Wire.begin();
  mpu.setAddress(0x68);
  mpu.begin();
  mpu.calcOffsets(true,true);


}

void loop() {
  int gyro_value=Gyro_PID.calculate(100,mpu.getAngleZ(),1.00,0.00,1.00);
  int encoder_value=Encoder_PID.calculate(100,count,12.00,10.00,3.00);

}
