int lamp = 11;
void setup()
{
  pinMode(lamp, OUTPUT);
}
void loop()
{
  digitalWrite(lamp, HIGH);
  delay(50);
  digitalWrite(lamp, LOW);
  delay(100);
  digitalWrite(lamp,HIGH);
  delay(50);
  digitalWrite(lamp, LOW);
  delay(1000);
}

