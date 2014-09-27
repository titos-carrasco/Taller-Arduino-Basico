/*
  LED activado por boton
 */

int led = 8;                 // pin al cual esta conectado el LED

// la funcion setup() se ejecuta una vez al reiniciarse  
void setup() {                
  pinMode(led, OUTPUT);      // inicializa el pin de salida
  digitalWrite(led, HIGH);   // enciende el LED (HIGH es el nivel de voltaje)
}

// la funcion loop() es llamada internamente en un ciclo sin fin
void loop() {
  // mantenga presionado el boton para encender el LED
}

