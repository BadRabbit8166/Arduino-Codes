#include <Stepper.h>
int SPMU = 32;
Stepper myStepper(SPMU, 2,3,4,5);
void setup()
{
myStepper.setSpeed(1000);
}
void loop() {
myStepper.step(2048);
delay(500);

}
