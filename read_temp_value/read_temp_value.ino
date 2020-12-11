//output on serial monitor
//need a temp sensor---- LM34
const int temp = A0;
int value;
void setup() {
  //Analog sensor is itself input not an output so we can omit that wiring here
  Serial.begin(9600);  //baud rate
}

void loop() {
  value = analogRead(temp);
  value = value * 0.48827;
  Serial.print(String(value));  //serial output only prints strings not integer---typecasting
  Serial.println(); //goto newline
  delay(1000); //1 second delay

}
