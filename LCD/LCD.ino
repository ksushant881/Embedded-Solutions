#include<LiquidCrystal.h>
const int rs=9 ,en=8 ,d0=0,d1=1,d2=2,d3=3,d4=4,d5=5,d6=6,d7=7;
LiquidCrystal lcd(rs,en,d0,d1,d2,d3,d4,d5,d6,d7);
void setup() {
 lcd.begin(16,2);
 lcd.print("Hello World!");

}

void loop() {
  lcd.setCursor(0,1);
  lcd.print(millis());
  

}
