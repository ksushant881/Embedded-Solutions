#include "DHT.h" 
#define DHTPIN 8 
#define DHTTYPE DHT11 
const int red=1;
const int green=2;

DHT dht(DHTPIN, DHTTYPE); 
void check(int x){
  if(x<=35){
    digitalWrite(green,HIGH);  
  }
  else{
    digitalWrite(red,HIGH);
  }
  return;
}

void reset(){
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);  
}

void setup() {
  dht.begin(); 
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  reset();
  float value= dht.readTemperature();
  check(value);
  delay(1000);
  
}
