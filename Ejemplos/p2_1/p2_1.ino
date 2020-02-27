void setup ()
{
  Serial.begin(9600) ;
}
void loop ()
{
  int a = 5;
  int b = 7;
  int suma;
  suma = a + b;
  Serial.print(" a + b  = ");
  Serial.println(suma);
  delay(10000)  
}
