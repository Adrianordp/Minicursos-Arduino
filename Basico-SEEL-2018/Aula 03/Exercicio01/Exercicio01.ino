// Funcao de piscar 2 LEDs - Adriano Rodrigues
#define LED0  13  // Maneira alternativa de declarar constantes
#define LED1  12  // Nao consome memoria do Arduino
boolean E[2]; // Vetor de estados - Variavel GLOBAL
void setup()
{
  // Dispensa comentarios...
  Serial.begin (9600); pinMode(LED0, OUTPUT); pinMode(LED1, OUTPUT);
}
void loop()
{
  piscar(LED0, 0); // Pisca o LED zero
  piscar(LED1, 1); // Pisca o LEL um
  delay(500);
}

// Funcao dedicada a piscar LEDs
void piscar(int LED, int i) // Variaveis LOCAIS
{
  E[i] = !E[i];            // Alterna o valor do estado
  digitalWrite(LED, E[i]); // Escreve no LED
}
