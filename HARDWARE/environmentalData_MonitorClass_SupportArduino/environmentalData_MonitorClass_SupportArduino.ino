#include <Adafruit_Sensor.h>

long duration;
long precipitation;
const int trig = 10;
const int echo = 11;
int redWavelength = 7;
int blueWavelength = 5;
int greenWavelength = 6;
const int waterBuzzer = 13;

class supportArduino {

  public:

    void setup() {
      pinMode(echo, INPUT);
      pinMode(trig, OUTPUT);
      pinMode(redWavelength, OUTPUT);
      pinMode(blueWavelength, OUTPUT);
      pinMode(greenWavelength, OUTPUT);
      Serial.begin(9600);
    }

    void RGB_color(int red, int green, int blue) {
      #ifdef COMMON_ANODE
            red = 255 - red;
            green = 255 - green;
            blue = 255 - blue;
      #endif

      analogWrite(redWavelength, red);
      analogWrite(greenWavelength, green);
      analogWrite(blueWavelength, blue);
    }

    void loop() {
      digitalWrite(trig, LOW);
      delayMicroseconds(2);
      digitalWrite(trig, HIGH);
      delayMicroseconds(10);
      digitalWrite(trig, LOW);
      duration = pulseIn(echo, HIGH);
      precipitation = duration*0.034/2; 

      if(precipitation >= 100) {
        Serial.println(precipitation);
        Serial.println("LOW WATER LEVELS");
        RGB_color(0, 0, 255);
      }

      if (precipitation >= 6 && precipitation <= 99) {
        Serial.println(precipitation);
        Serial.println("MID WATER LEVELS");
        RGB_color(0, 255, 0);
      }

      if (precipitation <= 5) {
        Serial.println(precipitation);
        Serial.println("HIGH WATER LEVELS");
        RGB_color(255, 0, 0);
        
        tone(waterBuzzer, 1000);
        delay(1000);
        noTone(waterBuzzer);
        delay(2000);
      }
    }
};

supportArduino supportArduinoActivated;
