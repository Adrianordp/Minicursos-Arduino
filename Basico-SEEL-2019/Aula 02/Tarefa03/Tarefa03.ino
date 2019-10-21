// Controlar Angulo do Servo por Serial - Adriano Rodrigues
#include <Servo.h> // Adiciona a biblioteca de servos
Servo servo1; // Cria uma variavel servo1 na classe Servo
int pos = 0 ; // Posicao em graus
void setup()
{
  Serial.begin(9600);
  servo1.attach(13); // Anexa o servo a porta 13
}
void loop()
{
  if (Serial.available() > 0)
  {
    pos = Serial.parseInt(); // Interpreta o dado lido como um int
  }
  servo1.write(pos);
  delay(50);
}
