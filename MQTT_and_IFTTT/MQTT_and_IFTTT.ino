#include<ESP8266WiFi.h>

//relay used to control light
//wifi ssid password

//server name server port username 1883 //use 8883 for SSL
//activation key

//client mode because it is going to receive the data from mqtt server

//setup mqtt client
Adafruit_MQTT_Client_mqtt(&client,AIO_SERVER


//on off


void setup() {
  Serial.begin(9600); //baud rate of wifi is 115200 but we can use 9600 also
  pinMode(Realy1,OUTPUT);

  //connect to wifi access point
  
  //display ip address

  //setup mqtt subscription for on off feed
  mqtt.subscribe(&lighton); //&because it is a string sending the address of first letter
  mqtt.sub
}

void loop() {
  MQTT_connect();

  //if subscription==light on then turn on  

}
//subscription is the input we are giving to google assistant
