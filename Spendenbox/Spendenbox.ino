/*Projekt Spendenbox
 * (C) Felix Beer
 * 10.11.2018
 */

#include <Stepper.h> //Schrittmotor-Bibliothek laden
#include <Servo.h> //Servo-Bibliothek laden

int SPU = 2048; //Schritte pro Umdrehung definieren
int rgbrot = 12;
int rgbgruen = 11;
int rgbblau = 10;
int taster = 9;
int reset = 2;
int tasterstatus = 0;

//Die Motoren definieren
Stepper katze(SPU, 3, 5, 4, 6); //Der Schrittmotor heisst Katze
Servo klappe; //Der Servo heisst jetzt klappe

//Alles einstellen
void setup()
{
  katze.setSpeed(5);
  klappe.attach(8);
  pinMode(taster, INPUT);
  pinMode(rgbrot, OUTPUT);//RGB-LED einstellen
  pinMode(rgbgruen, OUTPUT);
  pinMode(rgbblau, OUTPUT);
}
  

void loop(){
  digitalWrite(rgbgruen,HIGH);
  tasterstatus = digitalRead(taster);
  if(tasterstatus == HIGH){
    digitalWrite(rgbgruen,LOW);
    digitalWrite(rgbblau,HIGH);
    klappe.write(130);
    delay(3000);
    klappe.write(100);
    delay(1000);
    delay(1000);
    digitalWrite(rgbgruen,HIGH);
    katze.step(-500);
    delay(5000);
    katze.step(500);
    delay(1000);
    digitalWrite(rgbblau,LOW);
    digitalWrite(rgbgruen,LOW);
    delay(1000);
    digitalWrite(rgbrot, HIGH);
    delay(1000);
    digitalWrite(rgbrot, LOW);
    delay(1000);
    digitalWrite(rgbrot, HIGH);
    delay(1000);
    digitalWrite(rgbrot, LOW);
    digitalWrite(reset, HIGH);
    delay(1000);
  }
}

