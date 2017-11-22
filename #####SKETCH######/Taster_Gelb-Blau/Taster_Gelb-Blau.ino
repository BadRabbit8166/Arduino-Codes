int gelb = 13;
int taster = 7;
int stat = 0;
void setup ()
{
  pinMode (gelb, OUTPUT);
  pinMode (taster, INPUT);
}
void loop()
{
  stat = digitalRead(taster);
  if (stat == HIGH)
  {
    digitalWrite(gelb, HIGH);
  }
  else
  {
    digitalWrite(gelb, LOW);
  }
}

