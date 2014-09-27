/*
  Sonido a traves de un Buzzer
 */

int buzzer = 8;                 // pin al cual esta conectado el Buzzer

// la funcion setup() se ejecuta una vez al reiniciarse  
void setup() {                
  pinMode(buzzer, OUTPUT);      // inicializa el pin de salida
}

// la funcion loop() es llamada internamente en un ciclo sin fin
void loop() {
  for(int f=440; f<5000; f+=10)
  {
    doFrec(f);
  }
}

void doFrec(int f)
{
  float d = (1000000.0/f)/2.0;
  digitalWrite(buzzer, HIGH);
  delayMicroseconds(d);
  digitalWrite(buzzer, LOW);
  delayMicroseconds(d);
}


