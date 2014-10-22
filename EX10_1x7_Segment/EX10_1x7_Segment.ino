/*
  Manipulacion de un display de 7 segmentos
 */

int segmentoA=2;                 // pin que controla el segmento A (pin x en display)
int segmentoB=3;                 // pin que controla el segmento B (pin x en display)
int segmentoC=5;                 // pin que controla el segmento C (pin x en display)
int segmentoD=6;                 // pin que controla el segmento D (pin x en display)
int segmentoE=7;                 // pin que controla el segmento E (pin x en display)
int segmentoF=9;                 // pin que controla el segmento F (pin x en display)
int segmentoG=8;                 // pin que controla el segmento G (pin x en display)
int segmentoP=4;                 // pin que controla el segmento Dot (pin x en display)

// la funcion setup() se ejecuta una vez al reiniciarse  
void setup() {       
  // inicializa los pines de salida  
  pinMode(segmentoA, OUTPUT);
  pinMode(segmentoB, OUTPUT);
  pinMode(segmentoC, OUTPUT);
  pinMode(segmentoD, OUTPUT);
  pinMode(segmentoE, OUTPUT);
  pinMode(segmentoF, OUTPUT);
  pinMode(segmentoG, OUTPUT);
  pinMode(segmentoP, OUTPUT);
  
  // apaga todos los segmentos
  digitalWrite(segmentoA, HIGH);
  digitalWrite(segmentoB, HIGH);
  digitalWrite(segmentoC, HIGH);
  digitalWrite(segmentoD, HIGH);
  digitalWrite(segmentoE, HIGH);
  digitalWrite(segmentoF, HIGH);
  digitalWrite(segmentoG, HIGH);
  digitalWrite(segmentoP, HIGH);
}

// la funcion loop() es llamada internamente en un ciclo sin fin
void loop() {
  // enciende cada segmento
  digitalWrite(segmentoA, LOW);
  delay(100);
  digitalWrite(segmentoA, HIGH);
  digitalWrite(segmentoB, LOW);
  delay(100);
  digitalWrite(segmentoB, HIGH);
  digitalWrite(segmentoC, LOW);
  delay(100);
  digitalWrite(segmentoC, HIGH);
  digitalWrite(segmentoD, LOW);
  delay(100);
  digitalWrite(segmentoD, HIGH);
  digitalWrite(segmentoE, LOW);
  delay(100);
  digitalWrite(segmentoE, HIGH);
  digitalWrite(segmentoF, LOW);
  delay(100);
  digitalWrite(segmentoF, HIGH);
  digitalWrite(segmentoG, LOW);
  delay(100);
  digitalWrite(segmentoG, HIGH);
  digitalWrite(segmentoP, LOW);
  delay(100);
  digitalWrite(segmentoP, HIGH);
}

