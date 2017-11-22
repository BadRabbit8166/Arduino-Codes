#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int trigger=7; 
int echo=6; 
long dauer=0; 
long entfernung=0; 
void setup()
{
lcd.begin (14, 2); 
pinMode(trigger, OUTPUT); 
pinMode(echo, INPUT); 
}
void loop()
{
digitalWrite(trigger, LOW); 
delay(5); 
digitalWrite(trigger, HIGH); 
delay(10);
digitalWrite(trigger, LOW);
dauer = pulseIn(echo, HIGH); 
entfernung = (dauer/2) * 0.03432; 
if (entfernung >= 500 || entfernung <= 0) 
{
lcd.println("Kein Messwert"); 
}
else 
{
lcd.print(entfernung); 
lcd.print(" cm"); 
delay(800);
lcd.clear();
}
delay(1000); 
}
