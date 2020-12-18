//generating PWM using pwm digital pins on board with negation sign
//3,5,6,9,10,11
int led=3;
void setup() {
 pinMode(led,OUTPUT);
}

void loop() {
  //fading the LED using analog output to digital pin
 for(int i=0;i<255;i++){
  analogWrite(led,i);
  delay(5);
 }//increase light intensity till here
 for(int i=255;i>0;i--){
  analogWrite(led,i);
  delay(5);
 }//decrease intensity
}
