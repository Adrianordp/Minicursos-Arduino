// Comunicacao Serial de Inteiros - Adriano Rodrigues
int buf = 0;
void setup() // Sempre utilizar Serial.begin() no setup
{
  Serial.begin(9600); // Configura Serial para 9600 de baud rate
}
void loop()
{
  if (Serial.available() > 0)
  {
    buf = Serial.parseInt(); // Interpreta o dado lido como um int
    Serial.println(buf * 2); // Imprime BUF multiplicado por 2
  }
}
