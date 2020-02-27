void setup ()
{
  Serial.begin(9600) ;
}
void loop ()
{
  int nota = 80;
  if (nota >= 85){
    Serial.println("Promocionado");
  }else if(nota < 65)
  {
     Serial.println("Libre");
  }else{
     Serial.println("Regular");
  } 
  delay(10000);
}
