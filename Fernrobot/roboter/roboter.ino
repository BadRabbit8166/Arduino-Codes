#include <Servo.h>
Servo servoblau;
#include <IRremote.h>


int RECV_PIN = 11;
int vor = 100;
int hinten = 80;
int stopp = 0;
int rf = 5;
int lf = 6;
int rr = 9;
int lr = 10;
int vorderlicht = 3;
int hinterlicht = 2;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(rf, OUTPUT);
  pinMode(lf, OUTPUT);
  pinMode(rr, OUTPUT);
  pinMode(lr, OUTPUT);
  pinMode(vorderlicht, OUTPUT);
  pinMode(hinterlicht, OUTPUT);
  servoblau.attach(8);
}

  void gerade() {
    analogWrite(rf, vor);
    analogWrite(lf, vor);
  }
  void stoppen() {
    analogWrite(rf, stopp);
    analogWrite(lf, stopp);
  }
  void links()
  {
    analogWrite(rf, vor);
    delay(1000);
    analogWrite(rf, stopp);
  }
  void rechts() {
    analogWrite(lf, vor);
    delay(1000);
    analogWrite(lf,stopp);
  }

void loop() {
  
  if (irrecv.decode(&results)) {
    Serial.println(results.value);
    if(results.value == 16736925)
    {
      analogWrite(rf, vor);
      analogWrite(lf, vor);
    }
    if(results.value == 16712445)
    {
      analogWrite(rf, stopp);
      analogWrite(lf, stopp);
      analogWrite(rr, stopp);
      analogWrite(lr, stopp);
    }
    if(results.value == 16720605)
    {
      analogWrite(rf, hinten);
      analogWrite(lr, hinten);
    }
    if(results.value == 16761405)
    {
      analogWrite(lf, hinten);
      analogWrite(rr, hinten);
    }
    if(results.value == 16754775)
    {
      analogWrite(rr, hinten);
      analogWrite(lr, hinten);
    }
    if(results.value == 16738455)
    {
      digitalWrite(rf, HIGH);
      digitalWrite(lf, HIGH);
    }
    if(results.value == 16724175)
    {
      servoblau.write(45);
    }
    if(results.value == 16718055)
    {
      servoblau.write(75);
    }
    if(results.value == 16743045)
    {
      servoblau.write(100);
    }
    if(results.value == 16716015)
    {
      digitalWrite(vorderlicht, HIGH);
    }
    if(results.value == 16726215)
    {
      digitalWrite(hinterlicht, HIGH);
    }
    if(results.value == 16734885)
    {
      digitalWrite(vorderlicht, LOW);
      digitalWrite(hinterlicht, LOW);
    }
    if(results.value == 16728765)
    {
      gerade();
      delay(1500);
      stoppen();
      delay(200);
      rechts();
      links();
      gerade();
      delay(1500);
      stoppen();
      delay(1000); 
      gerade();
      delay(1000);
      stoppen();
      links();
      delay(1000);
      gerade();
      delay(1000);
      stoppen ();
      links();
      rechts();
      links();
      delay(1000);
      gerade();
      delay(1000);
      rechts();
      links();
      gerade();
      delay(1000);
      stoppen();
      delay(1000);
      rechts();
         
    }
    irrecv.resume(); // Receive the next value
  }
  delay(100);
}
