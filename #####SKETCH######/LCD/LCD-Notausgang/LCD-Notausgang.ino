#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int taster = 8;
int led1 = 9;
int led2 = 7;
int stat = 0;
void setup()
{
  lcd.begin(16, 2);
  pinMode(taster, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}
void loop()
{
  stat=digitalRead(taster);
  if (stat == HIGH)
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    tone(6, 700);
    lcd.setCursor(15,0);
    lcd.print("N");
    delay(300);
    digitalWrite(led2, LOW);
    lcd.clear();
    lcd.setCursor(14,0);
    lcd.print("No");
    delay(300);
    digitalWrite(led2, HIGH);
    lcd.clear();
    lcd.setCursor(13,0);
    lcd.print("Not");
    delay(300);
    digitalWrite(led2, LOW);
    lcd.clear();
    lcd.setCursor(12,0);
    lcd.print("Nota");
    delay(300);
    digitalWrite(led2, HIGH);
    lcd.clear();
    lcd.setCursor(11,0);
    lcd.print("Notau");
    delay(300);
    digitalWrite(led2, LOW);
    lcd.clear();
    lcd.setCursor(10,0);
    lcd.print("Notaus");
    delay(300);
    digitalWrite(led2, HIGH);
    lcd.clear();
    lcd.setCursor(9,0);
    lcd.print("Notausg");
    delay(300);
    digitalWrite(led2, LOW);
    lcd.clear();
    lcd.setCursor(8,0);
    lcd.print("Notausga");
    delay(300);
    digitalWrite(led2, HIGH);
    lcd.clear();
    lcd.setCursor(7,0);
    lcd.print("Notausgan");
    delay(300);
    digitalWrite(led2, LOW);
    lcd.clear();
    lcd.setCursor(6,0);
    lcd.print("Notausgang");
    delay(300);
    digitalWrite(led2, HIGH);
    lcd.clear();
    lcd.setCursor(5,0);
    lcd.print("Notausgang");
    delay(300);
    digitalWrite(led2, LOW);
    lcd.clear();
    lcd.setCursor(4,0);
    lcd.print("Notausgang");
    delay(300);
    digitalWrite(led2, HIGH);
    lcd.clear();
    lcd.setCursor(3,0);
    lcd.print("Notausgang");
    delay(300);
    digitalWrite(led2, LOW);
    delay(200);
    digitalWrite(led2, HIGH);
    lcd.setCursor(3,1);
    lcd.print("H");
    delay(300);
    lcd.setCursor(3,1);
    lcd.print("Hi");
    delay(300);
    lcd.setCursor(3,1);
    lcd.print("Hie");
    delay(300);
    lcd.setCursor(3,1);
    lcd.print("Hier");
    delay(300);
    lcd.setCursor(3,1);
    lcd.print("Hier");
    delay(300);
    lcd.setCursor(3,1);
    lcd.print("Hier l");
    delay(300);
    lcd.setCursor(3,1);
    lcd.print("Hier la");
    delay(300);
    lcd.setCursor(3,1);
    lcd.print("Hier lan");
    delay(300);
    lcd.setCursor(3,1);
    lcd.print("Hier lang");
    delay(300);
    lcd.setCursor(3,1);
    lcd.print("Hier lang!");
    delay(6000);
    lcd.clear();
  }
  else
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    noTone(6);
  }
}
