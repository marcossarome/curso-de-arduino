void setup(){
  Serial.begin(9600);
}
void loop(){
  float suma = 0;
  float promedio;
  float valores[10] = {1.1,3,5,8.2,3.4,5,6,7,7,6};
  float sumae2=0;
  float varianza;
  for(int i=0;i<10;i++){
    suma = suma + valores[i];  
  }
    promedio = suma /10;
  Serial.println(promedio);
  for(int i=0;i<10;i++)
  {
    sumae2 = sq(valores[i]-promedio);
  }
  varianza = sumae2/10;
  Serial.println(varianza);
}
  
  
  
