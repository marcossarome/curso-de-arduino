void setup ()
{
  Serial.begin(9600) ;
}
void loop ()
{
  bool entrada1 = LOW;
  bool entrada2 = HIGH;
  bool entrada3 = HIGH;
  
  //Ejemplo de OR
  Serial.println("entrada1 OR entrada2");
  Serial.print(entrada1 || entrada2);
  
  //Ejemplo de AND
  Serial.println("entrada1 Y entrada 2");
  Serial.print(entrada1 && entrada2);
  
  //Ejemplo de NOT
  Serial.println("NOT entrada3");
  Serial.print(! entrada3);
  
}
