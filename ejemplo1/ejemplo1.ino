int pinBoton = 11;
//int estado = 0;
int pinLed1 = 8;

int pinLed2 = 9;

int lectura;
char l;
int estado1;
int estado2;



void setup()
  // put your setup code here, to run once:
 {pinMode(pinBoton, INPUT);
 Serial.begin(9600);
  pinMode(pinLed1, OUTPUT);
  
  pinMode(pinLed2, OUTPUT);

}

void loop() {/*
  // put your main code here, to run repeatedly:
  estado = digitalRead(pinBoton);

  //Serial.println(estado);
  if(estado)//estamos en pulldown es decir voltaje entra por el boton directo
  {
    digitalWrite(pinLed1,HIGH);
    digitalWrite(pinLed2,LOW);
    
  }
  else 
  {
    digitalWrite(pinLed2,HIGH);
    digitalWrite(pinLed1,LOW);
    
  }*/
  if(Serial.available()){
    
  //lectura =(int)Serial.read(); //lectura =Serial.parseInt();
  //char dato = Serial.read();
  //lectura = (int)dato;
  lectura= Serial.parseInt();
  estado1 = 0;
   estado2 = 1;
   for(int i= 0;i<lectura; i++)
   {
    digitalWrite(pinLed1, !estado1);
    
    digitalWrite(pinLed2, !estado2);
    estado1 = !estado1;
    estado2 = !estado2;
    delay(1000);
   }
   digitalWrite(pinLed1, LOW);
   
   digitalWrite(pinLed2, LOW);
   lectura = 0;
  }

}
