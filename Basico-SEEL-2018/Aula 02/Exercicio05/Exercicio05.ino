// Servo + Biblioteca
#include <Servo.h> // Adiciona a biblioteca de servos

Servo servo1; // Cria uma variavel servo1 na classe Servo
int pos = 0 ; // Posicao em graus

void setup()
{
  servo1.attach(13); // Anexa o servo a porta 13
}

void loop()
{
  for (pos = 0; pos <= 180; pos += 1) // Incrementa o angulo
  {
    servo1.write(pos); // Escreve o angulo desejado no servo
    delay(15);
  }
  for (pos = 180; pos >= 0; pos -= 1) // Decrementa o angulo
  {
    servo1.write(pos); // Escreve o angulo desejado no servo
    delay(15);
  }
}
