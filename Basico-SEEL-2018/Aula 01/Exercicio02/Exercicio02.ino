// LED com if (botao) - Adriano Rodrigues

int led   = 13, botao = 12;

void setup()
{
    pinMode(led, OUTPUT) ; pinMode(botao, INPUT);// Configuracao da porta digital do BOTAO
}

void loop()
{
    if (digitalRead(botao) == HIGH) digitalWrite(led, HIGH); // Escreve 5V na porta LED
    else digitalWrite(led, LOW); // Escreve 0V na porta LED
}
