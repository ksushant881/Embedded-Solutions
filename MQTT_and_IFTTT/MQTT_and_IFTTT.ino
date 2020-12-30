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


void setup() {
  Serial.begin(9600); //baud rate of wifi is 115200 but we can use 9600 also
  pinMode(Realy1,OUTPUT);

  //connect to wifi access point
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(WLAN_SSID);

  WiFi.begin(WLAN_SSID, WLAN_PASS);
  while(WiFi.status != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  //display ip address
  Serial.println("WiFi connected");
  Serial.println("IP Address: ");
  Serial.println(WiFi.localIP());
  
  //setup mqtt subscription for on off feed
  mqtt.subscribe(&lighton); //&because it is a string sending the address of first letter
  mqtt.subscribe(&lightoff);
  
}

void loop() {
  MQTT_connect();

  Adafruit_MQTT_Subscribe *subscription;    //if subscription==light on then turn on  
  while((subscription = mqtt.readSubscription(5000))){
    if(subscription==&lighton){
      digitalWrite(Relay1,1);
    }
    if(subscription==&lightoff){
      digitalWrite(Realy1,0);
    }
  }
}
//subscription is the input we are giving to google assistant
  void MQTT_connect(){
    int
  }
