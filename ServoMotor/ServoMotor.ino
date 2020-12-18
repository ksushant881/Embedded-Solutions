#include<Servo.h>
Servo servo_test; //a servo object for connected servo
int angle=0;
void setup() {
  servo_test.attach(5); //pin we use for pwm

}

void loop() {
 for(angle=0;angle<180;angle+=1){
  servo_test.write(angle);
  delay(15);
 }
 delay(1000);
 for(angle=180;angle>=1;angle-=5){
  servo_test.write(angle);
  delay(5);
 }

}
