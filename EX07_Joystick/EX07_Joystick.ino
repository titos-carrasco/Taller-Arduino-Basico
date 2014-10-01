/*
  Control con Koystick
 */
 
int pin_vrX  = 0;              // pin (A0) al cual esta conectada la salida del eje X
int pin_vrY  = 1;              // pin (A1) al cual esta conectado la salida del eje Y
int pin_sw   = 12;             // pin al cual esta conectado la salida del boton

// Incluye la libreria del LCD
#include <LiquidCrystal.h>
 
// Inicializa la libreria con los pines utilizados
// RS, E, D4, D5, D6, D7
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

// la funcion setup() se ejecuta una vez al reiniciarse  
void setup() {                
  lcd.begin(16, 2);              // setea el numero de filas y columnas
  pinMode(pin_sw, INPUT);        // el pin para leer el boton del joystick
  digitalWrite(pin_sw, HIGH);    // deja en 1 la entrada, ¿Por que?
}

// la funcion loop() es llamada internamente en un ciclo sin fin
void loop() {
  
  int x = analogRead(pin_vrX);
  int y = analogRead(pin_vrY);
  int b = digitalRead(pin_sw);

  lcd.setCursor(0, 0);                // cursor en la columna 0, fila 0
  lcd.print("X=");
  lcd.print(x);
  lcd.print(" Y=");
  lcd.print(y);
  lcd.print("                ");

  lcd.setCursor(0, 1);                // cursor en la columna 0, fila 1
  lcd.print("Boton=");
  lcd.print(b);
  lcd.print("                ");
}

