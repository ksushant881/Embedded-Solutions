//output on serial monitor
//need a temperature sensor---- LM34
const int temp = A0;
int value;
void setup() {
  //Analog sensor is itself input not an output so we can omit that writing here
  Serial.begin(9600);  //baud rate
}

void loop() {
  value = analogRead(temp);
  value = value * 0.48827; //value decided on basis of sensor microcontroller pair used
  Serial.print(String(value));  //serial output only prints strings not integer---typecasting
  Serial.println(); //goto newline
  delay(1000); //1 second delay

}
