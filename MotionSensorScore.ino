#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int vib_pin=7;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
pinMode(vib_pin,INPUT);
Serial.begin(9600);
lcd.begin();
lcd.backlight();
}

void loop() {
int score;
int val;
val=digitalRead(vib_pin);
if(val==1)
{
score+=10;
delay(2000);
}
while(true){
  lcd.setCursor(0,1);
  lcd.print(score);
  Serial.print(score);
delay(1000);
}

}