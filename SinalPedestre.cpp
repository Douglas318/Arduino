//Sinal de pedestres

#define VERDE 9

#define VERMELHO 10

#define BOTAO 12

int tempo = 0;

int bot= 0;

int contador = 0;  

  

void setup () {

  

  pinMode(VERDE, OUTPUT);

  pinMode(VERMELHO, OUTPUT);

  pinMode(BOTAO, INPUT);

  Serial.begin(9600);

}

void loop ()

{

  tempo = millis();

  bot = digitalRead(BOTAO);

  if(bot== HIGH) {

  	contador ++;

    Serial.print(contador);

  	delay(30);

  }

  if(bot== LOW) {

    digitalWrite(VERDE, LOW);

    digitalWrite(VERMELHO, HIGH);

  }

  if((contador >= 20) || (tempo >= 40000)){

    digitalWrite(VERDE, HIGH);

    digitalWrite(VERMELHO, LOW);

    delay(20000);

    tempo = 0;

    contador = 0;

  }    

}