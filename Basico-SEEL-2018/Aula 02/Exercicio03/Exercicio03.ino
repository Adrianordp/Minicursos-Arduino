// Brilho Variavel do LED via PWM - Adriano Rodrigues
// Porta do LED
int led = 11; // Deve ser uma porta PWM!
int buf = 0 ;
void setup()
{
    Serial.begin(9600);
    pinMode(led, OUTPUT);
}
void loop()
{
//    if (Serial.available()>0)
//    {
//        buf = Serial.parseInt(); // Interpreta o dado lido como um int
//    }
    buf = analogRead(0)/4;
    analogWrite(led,buf);
    delay(100);
}
