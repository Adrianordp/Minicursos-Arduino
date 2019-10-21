// Infrared basico - Adriano Rodrigues
#define temp 100
int led = 13, port_sinal = 2; // Porta do LED e do SINAL
boolean sinal = false       ; // Registrador do SINAL
unsigned long timer         ;

void setup()
{
  pinMode(led, OUTPUT)      ; // Configura porta digital do LED
  pinMode(port_sinal, INPUT); // Configura porta digital do SINAL
}

void loop()
{
  if (millis() - timer >= temp)
  {
    timer = millis()               ; // Atualiza timer
    sinal = digitalRead(port_sinal); // Le o SINAL
    digitalWrite(led, sinal)       ; // Escreve na porta LED
  }
}
