const int motor_a0=3;
const int motor_a1=4;

void setup() {
  pinMode(motor_a0,OUTPUT);
  pinMode(motor_a1,OUTPUT);
}
//default value of any GPIO pin is logic 1
void loop() {
  digitalWrite(motor_a0,HIGH);
  digitalWrite(motor_a1,LOW);
  delay(2000);
  //stopping the motor rotation
  digitalWrite(motor_a0,LOW);
  digitalWrite(motor_a1,LOW);
  delay(500);
  digitalWrite(motor_a0,LOW);
  digitalWrite(motor_a1,HIGH);
  delay(2000);
  //stopping the motor rotation
  digitalWrite(motor_a0,LOW);
  digitalWrite(motor_a1,LOW);
  delay(500);

}
//in harware implementation stop the motor first then chnage direction of motor rotation to avoid any damage
