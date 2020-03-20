void setup ()
{
  Serial.begin(9600) ;
}
void loop ()
{
  int numero = 1;
  do{
    Serial.println(numero);
    numero ++;
    delay(500);
  }while(numero <=10);
  delay(10000);
}
