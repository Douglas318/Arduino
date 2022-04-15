//Alerta de incendio

# define sensor_2 A1

# define sensor_1 A0

# define vermelho 12

# define verde 13

# define pino 2

int TempSensor1=0;

int TempSensor2=0;

void setup()
{
  pinMode(verde, OUTPUT);
  
  pinMode(vermelho, OUTPUT);
  
  pinMode(pino, OUTPUT);
  
  pinMode(sensor_1, INPUT);
 
  pinMode(sensor_2, INPUT);

}

void loop()
{
  TempSensor1 = analogRead(sensor_1);
  
  TempSensor2 = analogRead(sensor_2);  
 
  if (TempSensor1 > 209 || TempSensor2 > 209){
    
    digitalWrite(vermelho, HIGH);
    
    digitalWrite(verde, LOW);
    
    tone(pino, 1000);
  }
  else{
    
    digitalWrite(verde, HIGH);
    
    digitalWrite(vermelho, LOW);
    
    noTone(pino);
  }  
                         
}