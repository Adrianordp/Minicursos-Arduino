// IR + analogRead + Serial - Adriano Rodrigues
#define temp 100
int Leitura;
unsigned long timer;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  if (millis() - timer >= temp)
  {
    timer = millis()        ;
    Leitura = analogRead(A0);
    Serial.println(Leitura) ;
  }
}
