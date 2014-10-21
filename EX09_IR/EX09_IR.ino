/*
  Control de sensor IR y Control Remoto
 */
 
int pin_IR = 11;              // pin (PWM) al cual esta conectado el pin R

// Incluye la libreria IR
#include <IRremote.h>
#include <IRremoteInt.h>
IRrecv irrecv(pin_IR);
decode_results results;

// la funcion setup() se ejecuta una vez al reiniciarse  
void setup() {                
  Serial.begin(9600);

  pinMode(pin_IR, INPUT);        // el pin para leer el sensor IR
  irrecv.enableIRIn();           // inicia el lector IR
}

// la funcion loop() es llamada internamente en un ciclo sin fin
void loop() {
  if (irrecv.decode(&results))
  {
    int val = results.value;
    
    Serial.println(val, HEX);
    irrecv.resume();             // recibe el siguiente valor
  }
}

