// LED e laco for - Adriano Rodrigues

// Porta do LED
int led = 13;

void setup()
{
    // Configuracao da porta digital do LED
    pinMode(led, OUTPUT);
}

void loop()
{
    for (int i = 0;  i < 5; i++)
    {
        digitalWrite(led, HIGH); // Escreve 5V na porta LED
        delay(100*i)           ; // Espera por 100*i milissegundos
        digitalWrite(led, LOW) ; // Escreve 0V na porta LED
        delay(100*i)           ; // Espera por 100*i milissegundos
    }
}
