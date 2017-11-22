 #include <Servo.h>
Servo servogreifer;
void setup()
{
servogreifer.attach(7); // Pin7 ist Servoausgang
}
void loop()
{
servogreifer.write(50);  //Greifer auf  
delay(1000);
servogreifer.write(120);  //Greifer zu
delay(1000);
}
