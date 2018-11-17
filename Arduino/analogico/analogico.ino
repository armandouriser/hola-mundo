int voltajeA0;
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

}
