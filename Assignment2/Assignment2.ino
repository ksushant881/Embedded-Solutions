const int led1=1;
const int led2=2;
const int led3=3;
const int led4=4;
int value;
const int temp=A0;

void reset(){
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
}

void check(int x){
   if(value<35){
    digitalWrite(led1,HIGH);
    return;
  }
  else if(value==35){
    digitalWrite(led2,HIGH);
    return;
  }
  else if(value>35 && value<40){
    digitalWrite(led3,HIGH);
    return;
  }
  else if(value>=40){
    digitalWrite(led4,HIGH);
    return;
  }
}

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop() {
  reset();
  value = analogRead(temp);
  value = value * 0.48827;
  check(value);
  delay(10);
}
