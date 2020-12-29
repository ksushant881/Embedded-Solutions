#include <ESP8266WiFi.h> //allow to connect to wifi network
#include <ESP8266HTTPClient.h> //for get and post requests

const char* ssid = "yourNetworkName";   //connect nodemcu to internet
const char* password = "yourNetworkPassword";

void setup () {

Serial.begin(115200);
WiFi.begin(ssid, password);

while (WiFi.status() != WL_CONNECTED) {

  delay(1000);
  Serial.print("Connecting..");

}

}

void loop() {

if (WiFi.status() == WL_CONNECTED) { //Check WiFi connection status

  HTTPClient http;  //Declare an object of class HTTPClient

  http.begin("http://jsonplaceholder.typicode.com/users/1");  //Specify request destination
  int httpCode = http.GET();                                  //Send the request

  if (httpCode > 0) { //Check the returning code

    String payload = http.getString();   //Get the request response payload
    Serial.println(payload);             //Print the response payload

  }

  http.end();   //Close connection

}

delay(30000);    //Send a request every 30 seconds
