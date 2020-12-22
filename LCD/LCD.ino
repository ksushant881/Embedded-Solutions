//8bit mode
#include<LiquidCrystal.h>
const int rs=9 ,en=8 ,d0=0,d1=1,d2=2,d3=3,d4=4,d5=5,d6=6,d7=7;
LiquidCrystal lcd(rs,en,d0,d1,d2,d3,d4,d5,d6,d7);
void setup() {
 lcd.begin(16,2);
 lcd.setCursor(2,0); //(column number,row number)
 lcd.print("Hello World!");
 lcd.cursor();

}

void loop(){
  lcd.setCursor(5,1);
  // lcd.print(millis());//displays time of operation
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("Cleared");
  delay(1000);

}
