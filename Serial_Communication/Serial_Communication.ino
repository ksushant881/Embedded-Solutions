void setup() {
  Serial.begin(9600); //baud rate=symbols transferred per second by microcontroller
  //bit rate is number of bits sent per second
  //bluetooth baud rate 30400
  //different baud rates will result in data loss make them equal
  //if we change baud rate of microcontroller, other modules will be affected
  //so chnage baud rate of bluetooth(any external module)
  
  
  

}

void loop() {
  //by default data will be transferred using UART
  Serial.print("Winter is here\r\n");
  
  
}
