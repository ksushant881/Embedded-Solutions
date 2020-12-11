#include"ESP8266WiFi.h" //to use wifi module
int dBmtoPercentage(int dBm){
  int quality;
  if(dBm<=RSSI_MIN)
  {
    quality=0;
  }
  else if(dBm>=RSSI_MAX)
  {
    quality=100;
  }
  else{
    quality=2*(dBm +100);
  }
  return quality;
}
const int RSSI_MAX=-50;
const int RSSI_MIN=-100; //strengths of signal in dBm
//RSSI received signal strength indicator

const int displayEnc=1; //no use


void setup() {
  Serial.begin(115200);   //baud rate
  
  WiFi.mode(WIFI_STA);
  WiFi.disconnect(); //first going to disconnect from all the networks
  delay(2000);
  
  Serial.println("Setup done");
}

void loop() {
  Serial.println("WiFi scan started");
  int n = WiFi.scanNetworks(); //number of networks available nearby which were detected
  Serial.println("Wifi scan ended");
  if(n==0){
    Serial.println("No networks found");
    
  }
  else{
    Serial.print(n);
    Serial.println("Networks found");
    for(int i=0;i<n;++i){
      //print ssid and rssi for each network found
      Serial.print(i+1);
      Serial.print(") ");
      Serial.print(WiFi.SSID(i));  //SSID

      Serial.print(WiFi.RSSI(i));  //RSSI strength in dBm
      Serial.print("dBm (");

      Serial.print(dBmtoPercentage(WiFi.RSSI(i)); //signal strength in % user defined function
      Serial.print("% )");

      if(WiFi.encryptionType(i)==ENC_TYPE_NONE){
        Serial.println("<<***OPEN***>>>");
      }
      else{
        Serial.println();
      }
      delay(10);
      
    }    
    }
    delay(5000);
    WiFi.scanDelete();
    
}
