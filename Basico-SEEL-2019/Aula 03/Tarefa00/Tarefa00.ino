// Contador de tempo simples - Adriano Rodrigues
int tempo;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println(millis());
    delay(1000);
}
