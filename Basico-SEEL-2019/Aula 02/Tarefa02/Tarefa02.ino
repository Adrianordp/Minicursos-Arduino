// Velocidade do motor - Adriano Rodrigues
int regulacao, comando, port_motor = 3;

void setup()
{
    pinMode(port_motor,OUTPUT); // Definir como saida!
}
void loop()
{
    regulacao = analogRead(A2)     ; // Potenciometro
    comando   = regulacao / 4      ; // De 1023 para 255
    analogWrite(port_motor,comando); // Escreve em PWM
    delay(100);
}
