// Semaforo - Proteus 8 - Adriano Rodrigues
int ledg = 11, ledy = 12, ledr = 13;

void setup()
{
    pinMode(ledg,OUTPUT); pinMode(ledy,OUTPUT); pinMode(ledr,OUTPUT);
    // Inicia os tres LEDs apagados
    digitalWrite(ledr,LOW); digitalWrite(ledy,LOW); digitalWrite(ledr,LOW);
}

void loop()
{
    digitalWrite(ledg,HIGH); delay(5000); digitalWrite(ledg,LOW);
    digitalWrite(ledy,HIGH); delay(1000); digitalWrite(ledy,LOW);
    digitalWrite(ledr,HIGH); delay(5000); digitalWrite(ledr,LOW);
}
