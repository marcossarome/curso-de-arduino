#define pinAnalogico A0

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int valor;
  valor = analogRead(pinAnalogico);
  Serial.println(valor);
}
