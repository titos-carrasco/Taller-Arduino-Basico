/*
  Control de led RGB
 */
 
int pin_R  = 9;              // pin (PWM) al cual esta conectado el pin R
int pin_G  = 10;             // pin (PWM) al cual esta conectado el pin G
int pin_B  = 11;             // pin (PWM) al cual esta conectado el pin B

// Incluye la libreria del LCD
#include <LiquidCrystal.h>
 
// Inicializa la libreria con los pines utilizados
// RS, E, D4, D5, D6, D7
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

// la funcion setup() se ejecuta una vez al reiniciarse  
void setup() {                
  lcd.begin(16, 2);              // setea el numero de filas y columnas
  lcd.setCursor(0, 0);                // cursor en la columna 0, fila 0
  lcd.print("Valores RGB");
  lcd.print("               ");

  pinMode(pin_R, OUTPUT);        // el pin para la componente R
  pinMode(pin_G, OUTPUT);        // el pin para la componente G
  pinMode(pin_B, OUTPUT);        // el pin para la componente B
  setLED(0, 0, 0);               // led apagado
}

// la funcion loop() es llamada internamente en un ciclo sin fin
void loop() {
  // RED
  setLED(255, 0, 0);
  delay(500);
  
  // GREEN
  setLED(0, 255, 0);
  delay(500);

  // BLUE
  setLED(0, 0, 255);
  delay(500);

  // YELLOW
  setLED(255, 255, 0);
  delay(500);
}

void setLED(int R, int G, int B)
{
  lcd.setCursor(0, 1);                // cursor en la columna 0, fila 1
  lcd.print("(");
  lcd.print(R);
  lcd.print(", ");
  lcd.print(G);
  lcd.print(", ");
  lcd.print(B);
  lcd.print(")");
  lcd.print("               ");

  analogWrite(pin_R, R);
  analogWrite(pin_G, G);
  analogWrite(pin_B, B);
}
  

