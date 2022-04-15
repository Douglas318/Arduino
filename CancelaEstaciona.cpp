//Simulador do acionamento de uma cancela de estacionamento apertando um botão

#include <Servo.h>

int x = 0;

int bot_1 = 0;

int bot_2 = 0;

Servo servo_3;

void setup()
{
  servo_3.attach(3, 500, 2500);
  
  pinMode(4, INPUT);
  
  pinMode(5, INPUT);
}

void loop()
{
  if (x == 0) {
    
    servo_3.write(0);
    
    x = 1;
  }
  bot_1 = digitalRead(4);
  
  bot_2 = digitalRead(5);
  
  if (bot_1 == HIGH) {
    
    servo_3.write(90);
  }
  
  if (bot_2 == HIGH) {
    
    servo_3.write(0);
  }
  
  delay(10);
}