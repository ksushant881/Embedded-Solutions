#define echoPin 2
#define trigPin 3
long duration;
int distance;

void setup() {
 pinMode(trigPin,OUTPUT);
 pinMOde(echoPin,INPUT);
 Serial.begin(9600);
 Serial.println("Ultrasonic Sensor HC-SR04 Test");
 Serial.println("with Arduino UNO");
 
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
 
  duration=pulseIn(echoPin,HIGH); //stores time until reflected signal is received
  distance=duration*0.034/2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}
