//car
/*
        -----------
   f1  O|         |O f2
        |         |
        |         |
        |         |
   b2  O|         |O b2
        -----------
*/

char input;
const int f1a=5;
const int f1b=2;
const int f2a=3;
const int f2b=4;
const int b1a=6;
const int b1b=7;
const int b2a=8;
const int b2b=9;

void stop_b(){
  digitalWrite(b1a,LOW);
  digitalWrite(b1b,LOW);
  digitalWrite(b2a,LOW);
  digitalWrite(b2b,LOW);
  delay(500);
}

void stop_f(){
  digitalWrite(f1a,LOW);
  digitalWrite(f1b,LOW);
  digitalWrite(f2a,LOW);
  digitalWrite(f2b,LOW);
  delay(500);
}
void stop_r(){
  digitalWrite(f2a,LOW);
  digitalWrite(f2b,LOW);
  digitalWrite(b2a,LOW);
  digitalWrite(b2b,LOW);
}
void stop_l(){
  digitalWrite(f1a,LOW);
  digitalWrite(f1b,LOW);
  digitalWrite(b1a,LOW);
  digitalWrite(b1b,LOW);
}
void turnRight(){
  stop_r();
  digitalWrite(f1a,HIGH);
  digitalWrite(f1b,LOW);
  digitalWrite(b1a,HIGH);
  digitalWrite(b1b,LOW);
  delay(500);
}
void turnLeft(){
  stop_l();
  digitalWrite(f2a,HIGH);
  digitalWrite(f2b,LOW);
  digitalWrite(b2a,HIGH);
  digitalWrite(b2b,LOW);
  delay(500);
}
void mov_f(){
  digitalWrite(f1a,HIGH);
  digitalWrite(f1b,LOW);
  digitalWrite(f2a,HIGH);
  digitalWrite(f2b,LOW);
  digitalWrite(b2a,HIGH);
  digitalWrite(b2b,LOW);
  digitalWrite(b2a,HIGH);
  digitalWrite(b2b,LOW);
  delay(2000);
}
void mov_b(){
  digitalWrite(f1b,HIGH);
  digitalWrite(f1a,LOW);
  digitalWrite(f2b,HIGH);
  digitalWrite(f2a,LOW);
  digitalWrite(b2b,HIGH);
  digitalWrite(b2a,LOW);
  digitalWrite(b2b,HIGH);
  digitalWrite(b2a,LOW);
  delay(2000);
}
void setup() {
  Serial.begin(9600);
  pinMode(f1a,OUTPUT);
  pinMode(f1b,OUTPUT);
  pinMode(f2a,OUTPUT);
  pinMode(f2b,OUTPUT);
  pinMode(b1a,OUTPUT);
  pinMode(b1b,OUTPUT);
  pinMode(b2a,OUTPUT);
  pinMode(b2b,OUTPUT);
  
}

void loop() {
  input=Serial.read();
  if(input=="f"){
    mov_f();
  }
  else if(input=="b"){
    mov_b();
  }
  else if(input=="r"){
    turnRight();
  }
  else if(input=="l"){
    turnLeft();
  }
  delay(2000);
}
