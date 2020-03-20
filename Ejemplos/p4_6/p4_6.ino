/* 
###  Control de brillo para un led por salida PWM ###

El programa enciende progresivamente el led y luego lo apaga durante 2 segundos.
Luego repite indefinidamente la secuencia. En puerto serie envia el porcentaje. 
Entradas: NC
Salidas: Pin 6, Led en serie con Resistencia limitadora  */

#define pinLED 13

void setup(){
  Serial.begin(9600);
  pinMode(pinLED,OUTPUT);
}
void loop(){
  int porcentaje;
  for(int i=0;i<255;i++){
    analogWrite(pinLED,i);
    porcentaje = map (i,0,255,0,100);
    Serial.println(porcentaje);
    delay(10);  
  }
  analogWrite(pinLED,0);
  Serial.println(0);
  delay(2000);
}
