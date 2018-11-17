int pinLed1 = 8;

int pinLed2 = 9;

int pinLed3 = 10;

char lectura;

void setup() {
  // put your setup code here, to run once:
pinMode(pinLed1, OUTPUT);
  
  pinMode(pinLed2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){
  lectura = Serial.read();
  switch(lectura)
  {
    case 'a':
      digitalWrite(pinLed1, HIGH);

    
    digitalWrite(pinLed3, LOW);
    digitalWrite(pinLed2, LOW);
    break;
    
    case 'b':
      digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, LOW);
    
    digitalWrite(pinLed1, LOW);
    break;
     case 'c':
      digitalWrite(pinLed3, HIGH);
      
    digitalWrite(pinLed2, LOW);
    
    digitalWrite(pinLed1, LOW);
    break;
    
  
  }
}

}
