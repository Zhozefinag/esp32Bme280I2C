#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

Adafruit_BME280 bme; // I2C

void setup() {
  Serial.begin(9600);
  Serial.println(F("BME280 test"));

 
  bool status = bme.begin(0x76);  

  if (!status) {
    Serial.println("Could not find a valid BME280 sensor, check wiring or I2C address!");
    while (1); 
  }
}

void loop() {
  Serial.print("Temperature = ");
  Serial.print(bme.readTemperature());
  Serial.println(" *C");

  delay(2000); 
}
