// Frequencia do LED + Porta analogica - Adriano Rodrigues

int     led     = 13  ; // Porta do LED
int     periodo = 0   ; // Valor do period
boolean estado  = true; // Estado do led

void setup()
{
    pinMode(led, OUTPUT); // Configura a porta digital ligada ao LED
}

void loop()
{
    estado = !estado        ; // Alterna o valor do estado.
    periodo = analogRead(0) ; // Le o valor do potenciometro
    digitalWrite(led,estado);
    delay(periodo/2)        ; // Periodo determinado pela leitura analogica
}
