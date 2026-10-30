#include "voltageSensor.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float test = 0;
  test = readsensor(A0);
  Serial.println(test);
  delay(500);
}
