int motorRechts = 2;
int motorLinks = 13;
int summer = 6;
int langsam = 150;
int stopp = 0;
void setup()
{
  pinMode(motorRechts,OUTPUT);
  pinMode(motorLinks,OUTPUT);
  pinMode(summer,OUTPUT);
}
void loop()
{
  digitalWrite(motorRechts,HIGH);
  digitalWrite(motorLinks,HIGH);
  delay(3000);
  digitalWrite(motorRechts,LOW);
  delay(350);
  digitalWrite(motorLinks,LOW);
  delay(2000);
  analogWrite(motorRechts,langsam);
  analogWrite(motorLinks,langsam);
  delay(4000);
  analogWrite(motorRechts,stopp);
  analogWrite(motorLinks,stopp);
  delay(1000);
  tone(summer,9);
  delay(3000);
  noTone(summer);
  delay(1000);
}
