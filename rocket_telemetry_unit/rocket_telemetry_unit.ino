/*****************************************************/
//  Rocket_Telemetry_unit
//  by CSewing

//  Version 0.1
//  06/03/2014

// The intention is to shoot this up with a Rocket, in order to record data from start to (hopfully) safe touchdown.
// For hardware description plaese see the hardware file
// The arduino is programmed wirelessly 
/*****************************************************/

// mandatiory libraries
#include <Wire.h> //I2C Arduino Library

// defining sensor I2C adresses
#define ROTATION     (0x69)                // L3G4200D device address
#define ACCELERATION (0x53)                // ADXL345 device address
#define COMPASS      (0x1E)                // HMC5883L device address
#define PREASSURE    (0x77)                // BMP085 device address
#define I2C_EEPROM_1 (0x50)                //  device address
#define I2C_EEPROM_2 (0x51)                //  device address

#define BAUD_RATE    (57600)               // mandatory for arduino fio xbee operation

// defining arduino pins
const int Sensor_Power = 12;              // pin of arduino fio for sensor power
const int Sensor_GND   = 11;              // pin of arduino fio for sensor power

void setup (){
  // connect sensors to power
  pinMode(Sensor_GND, OUTPUT); digitalWrite (Sensor_GND, LOW);
  pinMode(Sensor_Power, OUTPUT); digitalWrite (Sensor_Power, HIGH);

  Wire.begin();                           // join i2c bus
  Serial.begin(BAUD_RATE);                // start serial for output

  //Put the HMC5883 IC into the correct operating mode
  Wire.beginTransmission(COMPASS);        // open communication with HMC5883
  Wire.write(0x02);                       // select mode register
  Wire.write(0x00);                       // continuous measurement mode
  Wire.endTransmission();                 // close communication with HMC5883

}

void loop(){
}
