/*
 * printf() to the Serial
 */
#include "Arduino.h"
#include "Printf.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (!Serial);

#define EPSILON 0.00001

  for (float f = 0.0; f <= 1.0 + EPSILON; f += 0.01) {
    printf("f = %4.2f\n", f);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
