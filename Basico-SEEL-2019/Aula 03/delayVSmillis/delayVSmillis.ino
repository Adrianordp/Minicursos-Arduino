// Codigo COM delay()
void loop()
{
  // Digite aqui as instrucoes
  delay(500);
}


//Codigo SEM delay()
unsigned long timer; // Evitar erros de overflow
void loop()
{
  if (millis() - timer >= 500)
  {
    timer = millis(); // Atualizar o timer (NAO ESQUECER!)
    //Digite aqui as instrucoes
  }
}
