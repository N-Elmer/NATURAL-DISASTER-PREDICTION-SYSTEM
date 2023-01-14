#include <DHT.h>
#include <LiquidCrystal.h>
#include <Adafruit_Sensor.h>

#define DHTPIN A0
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

float airHumidityValue = A0;
float temperatureValue = A0;

byte iceChar[] = {
  B00100,
  B10101,
  B01110,
  B11111,
  B11111,
  B01110,
  B10101,
  B00100
};

byte heatChar[] = {
  B00001,
  B00001,
  B00101,
  B00101,
  B10101,
  B10101,
  B11111,
  B11111
};

byte ACOnChar[] = {
  B11111,
  B11000,
  B00001,
  B00010,
  B10100,
  B11000,
  B00011,
  B11111
};

byte arrowUpChar[] = {
  B00100,
  B01110,
  B11111,
  B11111,
  B01110,
  B01110,
  B01110,
  B01110
};

byte arrowDownChar[] = {
  B01110,
  B01110,
  B01110,
  B01110,
  B11111,
  B11111,
  B01110,
  B00100
};

byte hyphenChar[] = {
  B00000,
  B11111,
  B11111,
  B01110,
  B01110,
  B11111,
  B11111,
  B00000
};

byte warmChar[] = {
  B00000,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B00000
};

byte noACOnChar[] = {
  B11111,
  B10001,
  B01010,
  B00100,
  B01010,
  B10001,
  B11111,
  B11111
};

class primaryArduino {

   public:

    void setup() {
      dht.begin();
      lcd.begin(16, 2);
      lcd.setCursor(0, 0);
      lcd.print("    POWER ON    ");
      lcd.setCursor(0, 1);
      lcd.print(" SYSTEM BOOT UP ");
      delay(10000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("      POST      ");
      lcd.setCursor(0, 1);
      lcd.print(" COMPONENT TEST ");
      delay(10000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("       .       ");
      lcd.setCursor(0, 1);
      lcd.print("       .       ");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("       ..      ");
      lcd.setCursor(0, 1);
      lcd.print("       ..      ");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("       ...     ");
      lcd.setCursor(0, 1);
      lcd.print("       ...     ");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("      ... L    ");
      lcd.setCursor(0, 1);
      lcd.print("      .....    ");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("     ... LO    ");
      lcd.setCursor(0, 1);
      lcd.print("     ......    ");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("    ... LOA    ");
      lcd.setCursor(0, 1);
      lcd.print("    .......    ");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("   ... LOAD    ");
      lcd.setCursor(0, 1);
      lcd.print("   ........    ");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("  ... LOADI    ");
      lcd.setCursor(0, 1);
      lcd.print("  .........    ");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(" ... LOADIN    ");
      lcd.setCursor(0, 1);
      lcd.print(" ..........    ");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("... LOADING    ");
      lcd.setCursor(0, 1);
      lcd.print("...........    ");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("... LOADING .  ");
      lcd.setCursor(0, 1);
      lcd.print(".............  ");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("... LOADING .. ");
      lcd.setCursor(0, 1);
      lcd.print(".............. ");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("... LOADING ...");
      lcd.setCursor(0, 1);
      lcd.print("...............");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("... LOADING ...");
      lcd.setCursor(0, 1);
      lcd.print("...............");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("... LOADING ...");
      lcd.setCursor(0, 1);
      lcd.print("...............");
      delay(500);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(" POWERED BY LIA ");
      lcd.setCursor(0, 1);
      lcd.print("OPERATING SYSTEM");
      delay(10000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("  CLAIRVOYENCE  ");
      lcd.setCursor(0, 1);
      lcd.print("===BY N.ELMER===");
      lcd.createChar(0, iceChar);
      lcd.createChar(1, heatChar);
      lcd.createChar(2, ACOnChar);
      lcd.createChar(3, noACOnChar);
      lcd.createChar(4, arrowUpChar);
      lcd.createChar(5, arrowDownChar);
      lcd.createChar(6, hyphenChar);
      lcd.createChar(7, warmChar);
      lcd.home();
      delay(10000);
    }

    void loop() {
      airHumidityValue = dht.readHumidity();
      temperatureValue = dht.readTemperature();
      
      if (airHumidityValue >= 75) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("HIGH ");
        lcd.write((byte)4);
        lcd.print(" HUMI ");
        lcd.write((byte)1);
        lcd.setCursor(0, 1);
        lcd.print("HIGH DANGER ");
        lcd.write((byte)2);

        delay(5000);

        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("TEMP... = ");
        lcd.print(temperatureValue, 1);
        lcd.print((char)223);
        lcd.print("C");
        lcd.setCursor(0, 1);
        lcd.print("HUMI... = ");
        lcd.print(airHumidityValue);
        lcd.print("%"); 
      }

      else if (airHumidityValue >= 50 && airHumidityValue < 75) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MID ");
        lcd.write((byte)6);
        lcd.print(" HUMI ");
        lcd.write((byte)7);
        lcd.setCursor(0, 1);
        lcd.print("FAIR WARNING ");
        lcd.write((byte)3);

        delay(5000);

        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("TEMP... = ");
        lcd.print(temperatureValue, 1);
        lcd.print((char)223);
        lcd.print("C");
        lcd.setCursor(0, 1);
        lcd.print("HUMI... = ");
        lcd.print(airHumidityValue);
        lcd.print("%");
      }

      else if (airHumidityValue < 50) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("LOW ");
        lcd.write((byte)5);
        lcd.print(" HUMI ");
        lcd.write((byte)0);
        lcd.setCursor(0, 1);
        lcd.print("LOW DANGER ");
        lcd.write((byte)2);

        delay(5000);

        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("TEMP... = ");
        lcd.print(temperatureValue, 1);
        lcd.print((char)223);
        lcd.print("C");
        lcd.setCursor(0, 1);
        lcd.print("HUMI... = ");
        lcd.print(airHumidityValue);
        lcd.print("%");
      }

      else {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("VALUES ");
        lcd.print("NAN ");
        lcd.write((byte)8);
        lcd.setCursor(0, 1);
        lcd.print("SENSOR ERROR ");
        lcd.write((byte)8);
        
        delay(5000);

        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("TEMP... = ");
        lcd.print(temperatureValue, 1);
        lcd.print((char)223);
        lcd.print("C");
        lcd.setCursor(0, 1);
        lcd.print("HUMI... = ");
        lcd.print(airHumidityValue);
        lcd.print("%");
      }
      
      delay(5000);
    }
};

primaryArduino primaryArduinoActivated;
