int i = 0;
int sete = 0;

int oito = 0;

void setup()
{
  
  pinMode(7, INPUT);
  
  pinMode(8, INPUT);
  
  pinMode(12, OUTPUT);
  
  pinMode(13, OUTPUT);
}

void loop()

{
 
  sete = digitalRead(7);
 
  oito = digitalRead(8);
 
  if (oito == HIGH && sete == 1) {
  
    tone(12, 523, 1000); 

    digitalWrite(13, HIGH);
  
    delay(15);
  
  } else {
    
    noTone(12);
    
    digitalWrite(13, LOW);
    
    delay(15);
  }


}