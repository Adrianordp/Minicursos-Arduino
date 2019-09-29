// Calibragem do IR - Adriano Rodrigues
#define temp = 100
int  corte, Le; // Corte e leitura
char char_Le = 'B';
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
    Le = analogRead(A0); corte = analogRead(A2); // Recebe leitura e corte
    if (Le > corte) char_Le = 'B'; // Branco se leitura>corte
    else char_Le = 'P'           ; // Preto caso contrario
    imprimir(Le, corte, char_Le) ; // Chama impressao
  }
}

void imprimir(int l, int c, char cl)
{
  Serial.print(l); Serial.print('\t'); Serial.print(c);
  Serial.print('\t'); Serial.println(cl);
}

