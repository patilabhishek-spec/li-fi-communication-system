#include <LiquidCrystal.h>

#define SENSOR_PIN A0

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

int threshold = 500;

unsigned long lastTime = 0;
int bit = 0;
String data = "";

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);

  lcd.print("LiFi Ready");
  delay(2000);
  lcd.clear();
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);

  // Detect light → convert to bit
  if (sensorValue > threshold) {
    bit = 1;
  } else {
    bit = 0;
  }

  // Read every 200 ms (based on flash speed)
  if (millis() - lastTime > 200) {
    lastTime = millis();

    data += String(bit);
    Serial.print(bit);
  }

  // When enough bits received → decode
  if (data.length() >= 8) {

    // Example mapping (custom decoding)
    if (data == "10101010") {
      lcd.print("H");
    }
    else if (data == "11100011") {
      lcd.print("I");
    }
    else if (data == "11001100") {
      lcd.print(" ");
    }
    else if (data == "10111010") {
      lcd.print("E");
    }
    else if (data == "10111100") {
      lcd.print("L");
    }
    else if (data == "11111100") {
      lcd.print("O");
    }

    data = "";  // reset
    Serial.println();
  }
}
