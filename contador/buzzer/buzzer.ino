int pinBuzzer = 10; //Declaramos pin con el que va a operar el buzzer

//El buzzer puede trabajar con diferentes frecuencias
//Almacenamos los valores de frecuencia que le corresponden a cada nota musical
unsigned int
    Do = 523.251,
    DoS = 554.365,
    Re = 587.33,
    ReS = 622.254,
    Mi = 659.255,
    Fa = 698.456,
    FaS = 739.989,
    Sol = 783.991,
    SolS = 830.609,
    La = 880,
    LaS = 932.328,
    Si = 987.767,
    silencio = 30000;

//Declaramos también los tiempo para saber cuánto va a durar cada tono
unsigned int
    redonda = 4000,
    blanca = 2000,
    negra = 1000,
    corchea = 500,
    semicorchea = 250,
    fusa = 125,
    semifusa = 62;
void setup() {
  pinMode(pinBuzzer, OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  tone(pinBuzzer,Do,corchea);
 // delay(corchea);
  
  tone(pinBuzzer,Re,corchea);
  //delay(corchea);
  tone(pinBuzzer,Mi,corchea);
  //delay(corchea);
  tone(pinBuzzer,Fa,corchea);
  //delay(corchea);
  tone(pinBuzzer,Sol,corchea);
  //delay(corchea);
  tone(pinBuzzer,La,corchea);
  //delay(corchea);
  tone(pinBuzzer,Si,corchea);
  //delay(corchea);
  // put your main code here, to run repeatedly:

}
