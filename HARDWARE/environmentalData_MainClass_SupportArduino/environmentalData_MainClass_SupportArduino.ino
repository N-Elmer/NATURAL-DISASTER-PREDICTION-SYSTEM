#include <Adafruit_Sensor.h>

String outputData;
float dummyDataA = 0;
float dummyDataB = 0;
float soilHumidityPin = A0;
float soilHumidityValue = 0;
// float lightIntensityPin = A1;
float lightIntensityPin = 1;
float lightIntensityValue = 0;

class supportArduino {

   public:

    void setup() {
      Serial.begin(9600);
    }

    void loop() {
      
      soilHumidityValue = analogRead(soilHumidityPin);
      lightIntensityValue = analogRead(lightIntensityPin);
      outputData = String(soilHumidityValue)+","+String(lightIntensityValue)+","+String(dummyDataA)+","+String(dummyDataB);
      Serial.println(outputData);
      
      delay(5000);
    }
};

supportArduino supportArduinoActivated;
