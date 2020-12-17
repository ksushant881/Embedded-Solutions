const int motor1a=1;
const int motor1b=2;
const int motor2a=3;
const int motor2b=4;
void stop(){
  digitalWrite(motor1a,LOW);
  digitalWrite(motor1b,LOW);
  digitalWrite(motor2a,LOW);
  digitalWrite(motor2b,LOW);
  delay(500);
}
void setup() {
  pinMode(motor1a,OUTPUT);
  pinMode(motor1b,OUTPUT);
  pinMode(motor2a,OUTPUT);
  pinMode(motor2b,OUTPUT);
}

void loop() {
  digitalWrite(motor1a,HIGH);
  digitalWrite(motor1b,LOW);
  digitalWrite(motor2a,LOW);
  digitalWrite(motor2b,HIGH);
  delay(2000);
  stop();
  digitalWrite(motor1a,LOW);
  digitalWrite(motor1b,HIGH);
  digitalWrite(motor2a,HIGH);
  digitalWrite(motor2b,LOW);
  delay(2000);
  stop();

}
