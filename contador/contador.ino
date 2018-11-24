int contador = 0;

void setup() {
  Serial.begin(9600);
 
  pinMode(2, INPUT);
  
  pinMode(3, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  if(digitalRead(2)==1)
  {
    delay(50);
    while(digitalRead(2))
    {}
    delay(50);
    contador = contador +1;
    
  }
   if(digitalRead(3)==1)
  {
    delay(50);
    while(digitalRead(3))
    {}
    delay(50);
    Serial.println(contador);
    contador = 0;
    
  //delay(300);
  }
  // put your main code here, to run repeatedly:

}
