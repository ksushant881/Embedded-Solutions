#include "DHT.h" //library to be downloaded
#define DHTPIN 8 //digital pin connected to the DHT sensor
#define DHTTYPE DHT11 //type of DHT sensor used
//other types are DHT22 (AM2302) and DHT 21 (AM2301)

DHT dht(DHTPIN, DHTTYPE); //DHT function some header file communication

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 test program");
  dht.begin(); //demultiplexing process starting
}

void loop() {
  delay(2000);
  //reading temperature or humidity takes about 250ms so delay
  float h = dht.readHumidity(); //float data type beacuse random data
  float t= dht.readTemperature(); //in degree C by default
  float f=dht.readTemperature(true); //in F now argument is (isFahrenheit = true)

  if(isnan(h) || isnan(t) || isnan(f)){  //checking if these variables are 0 or not
    Serial.println("Failed to read from DHT sensor");
    return;
  }
  Serial.print("Humidity :");
  Serial.print("h");
  Serial.print("% Temperature: ");
  Serial.print(t);
  Serial.print("C ");
  Serial.print(f);
  Serial.print("F "); 
  Serial.println();
}
