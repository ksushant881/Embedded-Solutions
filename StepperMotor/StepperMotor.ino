//motor driver L293D is required to control stepper motor
//it operates on high voltages so use motor driver IC
//used bipolar (4pin) stepper motor 4 angles 2 coils (0-180,180-360)
//driver will be used completely as motor have 4 pins
#include<Stepper.h>
#define STEPS 40 //number of steps on the motor to go from 0 to 90 in case of bipolar stepper motor
Stepper stepper(STEPS,10,11,12,13); //instance of stepper class using steps and pins
int val=0;
void setup() {
  
stepper.setSpeed(100); //100rpm
}

void loop() {
 stepper.step(60);
 delay(1000);
 stepper.step(-60);
 delay(1000);

}
