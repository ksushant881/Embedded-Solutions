//common anode 7 segment display without using loop
const int 
const int 
const int 
const int 
const int 
const int 
const int 
 
void setup() {
 pinMode(2,OUTPUT);
 pinMode();
 pinMode();
 pinMode();
 pinMode();
 pinMode();
 pinMode();
 pinMode(9,OUTPUT); //using dp also dot
}

void loop() {
 
}

void display(){
  //display 0
 digitalWrite(2,0);
 digitalWrite(3,0);
 digitalWrite(4,0);
 digitalWrite(5,0);
 digitalWrite(6,0);
 digitalWrite(7,0);
 digitalWrite(8,1);
 delay(1000);

 
}
