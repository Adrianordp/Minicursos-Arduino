// Acionamento de LEDs Multitask - Adriano Rodrigues
#define LED0  13  // Maneira alternativa de declarar constantes
#define LED1  12  // Nao consome memoria do arduino
#define temp0 500
#define temp1 600
unsigned long timer0, timer1;
boolean E[2]; // Vetor de estados - Variavel GLOBAL
void setup()
{
  // Dispensa comentarios...
  Serial.begin (9600); pinMode(LED0, OUTPUT); pinMode(LED1, OUTPUT);
}
void loop()
{
  if (millis() - timer0 >= temp0)
  {
    timer0 = millis();    piscar(LED0, 0); // Pisca o LED zero
  }
  if (millis() - timer1 >= temp1)
  {
    timer1 = millis();    piscar(LED1, 1); // Pisca o LEL um
  }
}
