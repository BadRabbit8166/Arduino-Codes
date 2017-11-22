#include <Servo.h>
Servo servoblau;
#include <IRremote.h>

int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  servoblau.attach(7);
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value);
    if (results.value == 16724175)
    {
      servoblau.write(90);
    }
    if (results.value == 16718055)
    {
      servoblau.write(50);
    }
    if (results.value == 16738455)
    {
      servoblau.write(120);
    }
    irrecv.resume(); // Receive the next value
  }
  delay(100);
}
