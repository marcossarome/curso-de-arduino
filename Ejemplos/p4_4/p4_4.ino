#define pinAnalogico A0

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int valor;
  int tension;
  valor = analogRead(pinAnalogico);
  tension = map(valor,0,1023,0,5000);
  Serial.println(valor);
}
