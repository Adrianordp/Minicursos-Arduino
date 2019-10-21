// Brilho Variavel do LED via PWM - Adriano Rodrigues

// Porta do LED
int led = 11; // Deve ser uma porta PWM!

void setup()
{
  // Configuracao da porta digital do LED
  pinMode(led, OUTPUT);
}

void loop()
{
  for (int i = 0; i < 255; i++)
  {
    analogWrite(led, i);
    delay(15)         ;
  }
}
