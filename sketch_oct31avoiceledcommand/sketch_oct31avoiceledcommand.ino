#include <SoftwareSerial.h>
#define LED1 12
SoftwareSerial BT(10, 11); //TX, RX respetively
String state;

void setup() {
 BT.begin(9600);// bluetooth serial communication 
 Serial.begin(9600); // serial communication to check the data on serial monitor
  pinMode(LED1, OUTPUT); 

}

void loop() {
  while (BT.available()){  
  delay(10);
  char c = BT.read(); //Conduct a serial read
  state += c; //build the string- either "On" or "off"
  }  
  if (state.length() > 0) {
    Serial.println(state); 


  if(state == "princess turn on the light") 
  {
    digitalWrite(LED1, HIGH);
    
      } 
  
  else if(state == "princess turn off the light") 
  {
    digitalWrite(LED1, LOW);

     }
  
  
state ="";}} //Reset the variable