// Calibragem do IR - Adriano Rodrigues
#define temp 100
int  corte, Le     ; // Corte e leitura
char char_Le = 'B' ; // Indicador de Branco ou Preto
unsigned long timer;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  if (millis() - timer >= temp)
  {
    timer = millis();
    Le = analogRead(A0); Serial.print(Le); // Recebe e imprime leitura
    // Le e imprime corte
    corte = analogRead(A2); Serial.print('\t'); Serial.print(corte);
    if (Le > corte) char_Le = 'B'; // Branco se Le>corte
    else char_Le = 'P'           ; // Preto caso contrario
    Serial.print('\t'); Serial.println(char_Le);
  }
}
