int Distancia = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);

  digitalWrite(triggerPin, LOW);
  
  delayMicroseconds(2);
  
  digitalWrite(triggerPin, HIGH);
  
  delayMicroseconds(10);
  
  digitalWrite(triggerPin, LOW);
  
  pinMode(echoPin, INPUT);
  
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);

  pinMode(3, OUTPUT);
  
  pinMode(4, OUTPUT);
  
  pinMode(5, OUTPUT);
  
  pinMode(6, OUTPUT);
 
  pinMode(2, OUTPUT);
}

void loop()
{
  Distancia = 0.01723 * readUltrasonicDistance(8, 9);
 
  if (Distancia > 300 && Distancia < 350) {
 
    Serial.println("Maior que 300");
 
    digitalWrite(3, HIGH);
 
    digitalWrite(4, LOW);
 
    digitalWrite(5, LOW);
 
    digitalWrite(6, LOW);
 
    tone(2, 294, 1000); 
 
    delay(1200);
 
  } else {
 
    if (Distancia <= 300 && Distancia >= 150) {
 
      Serial.println("Entre 300 e 150");
 
      digitalWrite(3, LOW);
 
      digitalWrite(4, HIGH);
 
      digitalWrite(5, LOW);
 
      digitalWrite(6, LOW);
 
      tone(2, 523, 500);  
      
      delay(700);
 
    } else {
 
      if (Distancia < 150 && Distancia > 75) {
 
        Serial.println("Entre 150 e 75");
 
        digitalWrite(3, LOW);
 
        digitalWrite(4, LOW);
 
        digitalWrite(5, HIGH);
 
        digitalWrite(6, LOW);
 
        tone(2, 932, 300);
 
        delay(500); 
 
      } else {
 
        Serial.println("menor que 75");
 
        digitalWrite(3, LOW);
 
        digitalWrite(4, LOW);
 
        digitalWrite(5, LOW);
 
        digitalWrite(6, HIGH);
 
        tone(2, 1661, 200); 
 
        delay(400);
 
      }
 
    }
 
  }
}
