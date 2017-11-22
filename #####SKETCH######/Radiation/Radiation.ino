void setup() {
pinMode (6,OUTPUT);
pinMode (5,OUTPUT);
pinMode (4,OUTPUT);
pinMode (3,OUTPUT);
pinMode (2,OUTPUT);
}

void loop() {
digitalWrite(4, HIGH);
delay(500);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(3, HIGH);
delay(500);
digitalWrite(5, LOW);
digitalWrite(3, LOW);
digitalWrite(2, HIGH);
digitalWrite(6, HIGH);
delay(500);
digitalWrite(2, LOW);
digitalWrite(6, LOW);
}
