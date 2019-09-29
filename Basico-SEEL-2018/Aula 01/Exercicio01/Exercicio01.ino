// LED piscando - Adriano Rodrigues

// Porta do LED
int led = 13;

void setup()
{
    // Configuracao da porta digital do LED
    pinMode(led, OUTPUT);
}

void loop()
{
    digitalWrite(led, HIGH); // Escreve 5V na porta LED
    delay(2000)            ; // Espera por 2000 milissegundos
    digitalWrite(led, LOW) ; // Escreve 0V na porta LED
    delay(2000)            ; // Espera por 2000 milissegundos
}
