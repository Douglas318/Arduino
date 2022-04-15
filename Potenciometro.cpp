//Circuito para diminuir e aumentar o brilho do LED utilizando potenciômetro

#define LED 3

#define POT A0

#define LRD A1

int valrd=0;

int valpot=0;

int pwm =0;

void setup ()

{

  pinMode(LRD, INPUT);

  pinMode(LED, OUTPUT);

  pinMode(POT, INPUT);

  Serial.begin(9600);

}

void loop ()

{

  valrd= analogRead(A1);

  Serial.println(valrd);

  if(valrd< 145){

    valpo= analogRead(POT);

    pwm = map(valpot, 0, 1023, 0, 255);

    analogWrite(LED,pwm);

  }else{

    digitalWrite(LED,LOW);

  }

}