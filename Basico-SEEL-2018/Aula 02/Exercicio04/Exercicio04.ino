// Velocidade do motor - Adriano Rodrigues
int comando = 180; // Ciclo de trabalho = 200/255.
int port_motor = 3;

void setup()
{
    pinMode(port_motor,OUTPUT); // Definir como saida!
}
void loop()
{
    analogWrite(port_motor,comando); // Escreve em PWM
    delay(100);
}
