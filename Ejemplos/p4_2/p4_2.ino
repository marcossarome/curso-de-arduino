#define pinArranque 3
#define pinParada 4
#define pinMotor 5

void setup ()
{
  pinMode(pinArranque,INPUT);
  pinMode(pinParada,INPUT);
  pinMode(pinMotor,OUTPUT);
}
void loop ()
{
  int salida = 0;
  while(1){
    if (digitalRead(pinArranque)==true){
      salida = 1;
    }
    if (digitalRead(pinParada)==true){
      salida = 0;
    }
    digitalWrite(pinMotor,salida);
  }
}
