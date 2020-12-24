#include <SoftwareSerial.h>
//user defined serial communication done by using this header file
SoftwareSerial comm(8,9); //rx,tx pins assigned
char ch;
void setup() {
  Serial.begin(9600);
  comm.begin(9600);

}

void loop() {
  while(Serial.available()){
    ch = Serial.read();
    Serial.print(ch);
    comm.print(ch);
  }
}  
