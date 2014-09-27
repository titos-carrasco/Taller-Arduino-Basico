/*
  LED activado por boton
 */

int button = 2;              // pin que lee estado del boton
int led = 8;                 // pin al cual esta conectado el LED
boolean ledOn = false;       // estado actual del LED

// la funcion setup() se ejecuta una vez al reiniciarse  
void setup() {                
  pinMode(button, INPUT);    // inicializa el pin de entrada
  pinMode(led, OUTPUT);      // inicializa el pin de salida
  digitalWrite(led, LOW);    // apaga el LED
  
  Serial.begin(9600);        // habilitamos el envio de debug por el monitor serial
}

// la funcion loop() es llamada internamente en un ciclo sin fin
void loop() {
  // espera a que presionen el boton
  while(digitalRead(button)==LOW)
  {
  }
  
  // espera a que suelten el boton
  while(digitalRead(button)==HIGH)
  {
  }
  
  // un mensaje por el monitor serial
  Serial.println("Boton presionado...");

  // si el LED estaba encendido entonces lo apagamos
  if(ledOn)
  {
    digitalWrite(led, LOW);    // apaga el LED
    ledOn = false;
  }
  else
  {
    digitalWrite(led, HIGH);   // enciende el LED (HIGH es el nivel de voltaje)
    ledOn = true;
  }
}

