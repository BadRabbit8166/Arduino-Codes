#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int taster = 8;
int led = 9;
int stat = 0;
void setup()
{
  lcd.begin(16, 2);
  pinMode(taster,INPUT);
  pinMode(led,OUTPUT);
}
void loop()
{
  stat=digitalRead(taster);
  if (stat == HIGH)
  {
    digitalWrite(led, LOW);
    lcd.setCursor(15,0);
    lcd.print("F");
    delay(300);
    lcd.clear();
    lcd.setCursor(14,0);
    lcd.print("Fe");
    delay(300);
    lcd.clear();
    lcd.setCursor(13,0);
    lcd.print("Fel");
    delay(300);
    lcd.clear();
    lcd.setCursor(12,0);
    lcd.print("Feli");
    delay(300);
    lcd.clear();
    lcd.setCursor(11,0);
    lcd.print("Felix");
    delay(300);
    lcd.clear();
    lcd.setCursor(10,0);
    lcd.print("Felix");
    delay(300);
    lcd.clear();
    lcd.setCursor(9,0);
    lcd.print("Felix B");
    delay(300);
    lcd.clear();
    lcd.setCursor(8,0);
    lcd.print("Felix Be");
    delay(300);
    lcd.clear();
    lcd.setCursor(7,0);
    lcd.print("Felix Bee");
    delay(300);
    lcd.clear();
    lcd.setCursor(6,0);
    lcd.print("Felix Beer");
    delay(300);
    lcd.clear();
    lcd.setCursor(5,0);
    lcd.print("Felix Beer");
    delay(300);
    lcd.clear();
    lcd.setCursor(4,0);
    lcd.print("Felix Beer");
    delay(300);
    lcd.clear();
    lcd.setCursor(3,0);
    lcd.print("Felix Beer");
    delay(800);
    lcd.setCursor(3,1);
    lcd.print("0");
    delay(500);
    lcd.setCursor(3,1);
    lcd.print("02");
    delay(500);
    lcd.setCursor(3,1);
    lcd.print("022");
    delay(500);
    lcd.setCursor(3,1);
    lcd.print("0229");
    delay(500);
    lcd.setCursor(3,1);
    lcd.print("02295");
    delay(500);
    lcd.setCursor(3,1);
    lcd.print("02295-");
    delay(500);
    lcd.setCursor(3,1);
    lcd.print("02295-2");
    delay(500);
    lcd.setCursor(3,1);
    lcd.print("02295-22");
    delay(500);
    lcd.setCursor(3,1);
    lcd.print("02295-221");
    delay(500);
    lcd.setCursor(3,1);
    lcd.print("02295-2213");
    delay(2000);
    lcd.clear();
  }
  else
  {
    digitalWrite(led, HIGH);
  }
}
