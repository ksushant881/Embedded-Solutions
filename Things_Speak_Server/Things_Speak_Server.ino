//no librariry required
//commands given to wifi module
char inchar='x';
unsigned char rev,count, gchar='x',gchr1,robos='s';

void things_done(){
  Serial.write("\r\n\r\n");
  delay(1000);
}

void things_send(){
  //to access the things speak server
  Serial.write("AT+CIPSTART=4,\"TCP\",\" IP ADDRESS\",80\r\n"); // AT command used to access the web server TCP protocol unique ip address of things speak server communication port(IOT is port 80 only)
  delay(1500);
  Serial.write("AT+CIPSEND=4,77\r\n"); //number of characters we will be sending to server
  delay(1500);
  Serial.write("GET //API ADDRESS");
  
}

void okcheck(){
  unsigned char rcr;
  do{
    rcr=Serial.read();
  }
  while(rcr!='K');
    
}

void setup() {
 Serial.begin(9600); //baud rate
 Serial.write("AT\r\n");   //wifi module in access mode configuring using AT commands
 delay(500);      
 okcheck();   // AT commands sends ok if everything is fine so checking using this function
 
 Serial.write("ATE0\r\n"); //repeat question and answer so cancel the repeated question --alert echo zero
 Serial.write("AT+CWMODE=1\r\n"); //to enable access mode for station mode it is 2 or 3
 delay(500);
 okcheck();
 
 Serial.write("AT+CWJAP=\" \",\ "\"\r\n");   //provide username and password to the wifi module
 delay(500);
 okcheck();
 
 Serial.write("AT+CIPMUX=1\r\n");   //configure internet connection
 delay(500);
 okcheck();

 delay(1000);
 Serial.println("Connected");
 delay(1000);
 
}

void loop() {
 things_send(); //configure the server
 Serial.write("field1="); //select filed to be updated
 Serial.write('1'); //sending the value
 things_done();
 

}
//servers do not support rapid updation so send data slowly
