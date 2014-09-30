/*
  Sensor de Luz
 */
 
int sensor_luz = 0;          // pin en donde leeremos el sensor

// Incluye la libreria del LCD
#include <LiquidCrystal.h>
 
// Inicializa la libreria con los pines utilizados
// RS, E, D4, D5, D6, D7
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

// la funcion setup() se ejecuta una vez al reiniciarse  
void setup() {                
  lcd.begin(16, 2);              // setea el numero de filas y columnas
  lcd.print("Sensor de Luz:");   // Mensaje inicial  
}

// la funcion loop() es llamada internamente en un ciclo sin fin
void loop() {
  
  int luz = analogRead(sensor_luz);
  lcd.setCursor(0, 1);                // cursor en la columna 0, fila 1
  lcd.print(luz);                     // mostramos el valor del sensor
  lcd.print("    ");                  // limpiamos los caracteres del valor anterior
}

