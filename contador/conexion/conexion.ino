#include<SoftwareSerial.h>
SoftwareSerial Arduino(6,7);
bool flag = true;
void setup() {
  Arduino.begin(9600);
  Serial.begin(9600);

 
  // put your setup code here, to run once:

}

void loop() {
  if(Arduino.available())
  {
     Serial.println("El burro dice : ");
      while(Arduino.available()){
    Serial.write(Arduino.read());}
  }
  
  
  
  if(Serial.available())
  {
    //Arduino.write(Serial.write(Serial.println("hola")));
    
      while(Arduino.available()){
    Serial.println("yo digo : ");
      
       Arduino.write(Serial.read());
       delay(60);
  }}
  // put your main code here, to run repeatedly:

}
