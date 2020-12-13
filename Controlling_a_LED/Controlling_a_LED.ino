//operate a single LED using a switch
const int led = 3;
const int aswitch = 7; //switch was a keyword
//all pins are GPIU pins can be used as both input as well as output pins


void setup() {
  pinMode(led,OUTPUT); //case sensitive arduino programming
  pinMode(aswitch,INPUT);  
}

void loop() { //can it be here digitalRead(aswitch)==LOW??? Yes
  if(digitalRead(aswitch)==0){ //sensors have activated logic 0 deactivated then logic 0
    digitalWrite(led,HIGH); //pin and logic that we want to apply
  }
  else{
    digitalWrite(led,LOW);
  }  
}
