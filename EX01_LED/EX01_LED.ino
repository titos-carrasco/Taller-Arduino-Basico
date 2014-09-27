/*
  LED parpadeando
 */

int led = 8;                 // pin al cual esta conectado el LED

// la funcion setup() se ejecuta una vez al reiniciarse  
void setup() {                
  pinMode(led, OUTPUT);      // inicializa el pin de salida
}

// la funcion loop() es llamada internamente en un ciclo sin fin
void loop() {
  digitalWrite(led, HIGH);   // enciende el LED (HIGH es el nivel de voltaje)
  delay(1000);               // espera por 1 segundo
  digitalWrite(led, LOW);    // apaga el LED poniendo el voltaje en LOW
  delay(1000);               // espera por 1 segundo
}

