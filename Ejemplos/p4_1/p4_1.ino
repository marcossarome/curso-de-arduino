void setup ()
{
  Serial.begin(9600) ;
}
void loop ()
{
  int numerosA[] = {2,4,6,8};
  int numerosB[4] = {1,3,5,7};  
  for(int i = 0;i < 4;i++)
  Serial.println("Numeros A");
  {
    Serial.println(numerosA[i]);
    delay(100);
  }
  Serial.println("Numeros B");
  for(int i = 0;i < 4;i++)
  {
    Serial.println(numerosB[i]);
    delay(100);
  }
  delay(10000);
}
