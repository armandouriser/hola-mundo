int Led1 = 3;
int pot = A0;
int pl;
int LL;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  pl = analogRead(pot);
  LL= map(pot,0,1023,0,5);
  Serial.println(LL);
  
  
  
    
  analogWrite(Led1,LL);
  
  
  /*
   * int voltajeA0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
voltajeA0 = analogRead(A0); //recibe pin analogico y devuelve de 0 a 1023
//Serial.println(voltajeA0);
//float valorMapeado =(float)voltajeA0*(float)5/(float)1023;
float valorMapeado = map(voltajeA0,0,1023,0,5);


//map(voltajeA0,0,1023,0,5);

Serial.println(valorMapeado);

}+
  analogWrite(Led1, 0);
  delay(500);
  
  analogWrite(Led1, 75);
  delay(500);
  analogWrite(Led1, 125);
  delay(500);
  analogWrite(Led1, 255);
  delay(500);
  // put your main code here, to run repeatedly:
*/
}
