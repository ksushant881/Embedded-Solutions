char c;
void setup() {
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()){ //Serial.available give a boolean output
    c=Serial.read();
  }
  Serial.print(c);
  
}
