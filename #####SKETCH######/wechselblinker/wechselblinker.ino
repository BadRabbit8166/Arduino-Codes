void setup() {
  // put your setup code here, to run once:
  // LED 2x blau
  // R 2x 100OHM
  



pinMode(7, OUTPUT); // Pin 7 ist ein Ausgang.

pinMode(8,OUTPUT); // Pin 8 ist ein Ausgang.

}

void loop() {


digitalWrite(7, HIGH); // Schalte die LED an Pin7 an.

delay(150); // Warte 150 Millisekunden.

digitalWrite(7, LOW); // Schalte die LED an Pin7 aus.

digitalWrite(8, HIGH); // Schalte die LED an Pin8 ein.

delay(150); // Warte 150 Millisekunden.

digitalWrite(8, LOW); // Schalte die LED an Pin8 aus.

}
