//uno have 1 KB eeprom
//nano micro 5-12KB
//mega 4KB
#include<EEPROM.h>
int a;
void setup() {
  Serial.begin(9600);  
  
  //mention address location and data you want to save
  EEPROM.write(0,65); //storing 65 value at 0 location in EEPROM
  a=EEPROM.read(0); //receiving data from EEPROM
  Serial.print(a);    //priting on serial monitor
  
}

void loop() {
 
}
