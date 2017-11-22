#include <Servo.h>
Servo servoblau;
int taster = 6;
int led = 4;
int stat = 0;
void setup ()
{
  pinMode(taster, INPUT);
  pinMode(led, OUTPUT);
  servoblau.attach(7);
}
void loop()
{
  stat=digitalRead(taster);
  if (stat == HIGH)
  {
    servoblau.write(50);
    tone(5, 300);
    digitalWrite(led, HIGH);
    delay(100);
    digitalWrite(led, LOW);
    delay(100);
  }
  else
  {
    noTone(5);
    servoblau.write(120);
    digitalWrite(led, LOW);
  }
}

