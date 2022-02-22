#include "HX711.h"

const int Pin_DT1 = 4;
const int Pin_SCK1 = 2;


HX711 balanza1;

void setup() {
  Serial.begin(115200);
  balanza1.begin(Pin_DT1, Pin_SCK1);
  Serial.print("Lectura del valor del ADC:t");
  Serial.println(balanza1.read());
  Serial.println("No ponga ningún objeto sobre la balanza");
  Serial.println("Destarando...");
  balanza.set_scale(243196.7814); //La escala por defecto es 1
  balanza.tare(20);  //El peso actual es considerado Tara.
  Serial.println("Coloque un peso conocido:");
}

void loop() {

  Serial.print("Valor de lectura: Kg");
  Serial.println(balanza.get_units(20));
  delay(1000);
}
