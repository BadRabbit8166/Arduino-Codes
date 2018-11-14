int schneller = 100;
int langsam = 80;
int mr = 5;
int ml = 6;
int trigger=7; 
int echo=12; 
long dauer=0; 
long entfernung=0; 
void setup()
{
Serial.begin (9600); 
pinMode(trigger, OUTPUT); 
pinMode(echo, INPUT); 
pinMode(mr, OUTPUT);
pinMode(ml,OUTPUT);
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
if (entfernung <= 50) 
{
digitalWrite(mr, LOW);
digitalWrite(ml, LOW);
delay(2000);
analogWrite(ml, langsam);
delay(1800);
digitalWrite(ml, LOW);
}
else 
{
Serial.print(entfernung); 
Serial.println(" cm"); 
analogWrite(mr, schneller);
analogWrite(ml, schneller);
}
delay(1000); 
}
