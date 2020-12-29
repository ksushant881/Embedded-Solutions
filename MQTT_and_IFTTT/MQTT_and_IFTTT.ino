#include<ESP8266WiFi.h>
#include "Adafruit_MQTT.h"
#include "Adafruit_MQTT_Client.h"


#define Relay1 //d1 pin   //relay used to control light
#define WLAN_SSID   //wifi ssid password
#define WLAN_PASS

//Adafruit.io setup
#define AIO_SERVER "io.adafruit.com"   //server name server port username 1883 //use 8883 for SSL
#define AIO_SERVERPORT 1883 //use 8883 for SSL
#define AIO_USERNAME ""
#define AIO_KEY ""    //activation key
int state=1; //global state

WiFiClient client; //an ESP8266 WiFi client class to connect to MQTT server
//WiFiClientSecure client; //for SSL

//setup the MQTT client by passing in the WiFi client and MQTT server and login details
Adafruit_MQTT_Client mqtt(&client,AIO_SERVER,AIO_SERVERPORT,AIO_USERNAME,AIO_KEY);

//Now setup feeds
Adafruit_MQTT_Subscribe lighton = Adafruit_MQTT_Subscribe(&mqtt,AIO_USERNAME"/feeds/lighton");
Adafruit_MQTT_Subscribe lightoff = Adafruit_MQTT_Subscribe(&mqtt,AIO_USERNAME"/feeds/lightoff");

void MQTT_connect();




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
