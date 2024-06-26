#ifndef __MPU6050_H
#define __MPU6050_H

void MPU6050_WriteReg(uint8_t RegAddress, uint8_t Data);
uint8_t MPU6050_ReadReg(uint8_t RegAddress);

void MPU6050_I2C_CheckEvent(I2C_TypeDef* I2Cx, uint32_t I2C_EVENT);
void MPU6050_Init(void);
uint8_t MPU6050_GetID(void);
//void MPU6050_GetData(int16_t *AccX, int16_t *AccY, int16_t *AccZ, 
//						int16_t *GyroX, int16_t *GyroY, int16_t *GyroZ);

void MPU6050_get_accdata(int16_t *AccX, int16_t *AccY, int16_t *AccZ);
void MPU6050_get_gyro(int16_t *GyroX, int16_t *GyroY, int16_t *GyroZ);

#endif
