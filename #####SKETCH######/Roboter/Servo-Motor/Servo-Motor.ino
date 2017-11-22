#include <Servo.h>
Servo servoblau;
void setup()
{
servoblau.attach(8);
}
void loop()
{
servoblau.write(60);
delay(500);
servoblau.write(150);
delay(500);
}
