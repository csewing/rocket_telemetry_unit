/*
Major hardware components
- Arduino Fio
- Sunkee 10DOF 9-axis Attitude Indicator 
  -  L3G4200D  I2C 3-axis gyroscope sensor
  -  ADXL345   I2C 3-axis accelerometer
  -  HMC5883L  I2C 3-axis magnotometer
  -  BMP085    I2C preassure/temperature sensor
- Heli-Max 1 cell 3.7 Volt 400 mAh LiPo battery, HMXP1010
- xbee module

Hardware connections to arduino
- xbee mounted onto provided sockeet of the arduino fio
- battery mounted between installed female pin headers of the arduino fio an connected to the JST-PH 2pin port
  The battery cable hab to be replaced. The battery is secured by a rubber band to the arduino.
- A prototyping board carryes all necessary periperial components and is equipet with pin-headers witch connect to the female headers of the arduino fio
  Sunkee board is solderd to a prototyping board (witout using headrs) and secured with additional solder point.
  A4  -> I2C SDA 
  A5  -> I2C SCL
  D12 -> VCC 3.3 Volt
  D11 -> GND











*/
