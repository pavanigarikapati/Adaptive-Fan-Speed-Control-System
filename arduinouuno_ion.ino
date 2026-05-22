#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27,16,2);

int ENA = 9;
int IN1 = 8;
int IN2 = 7;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  dht.begin();

  lcd.init();
  lcd.backlight();

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
}

void loop() {

  float temp = dht.readTemperature();

  int speedValue = 0;
  String statusFan;

  if(temp < 25){
    speedValue = 0;
    statusFan = "OFF";
  }
  else if(temp < 30){
    speedValue = 100;
    statusFan = "LOW";
  }
  else if(temp < 35){
    speedValue = 180;
    statusFan = "MED";
  }
  else{
    speedValue = 255;
    statusFan = "HIGH";
  }

  analogWrite(ENA, speedValue);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Temp:");
  lcd.print(temp);
  lcd.print(" C");

  lcd.setCursor(0,1);
  lcd.print("Fan:");
  lcd.print(statusFan);

  delay(1000);
}