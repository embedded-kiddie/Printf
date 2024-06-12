/*
 * printf() to the Serial
 */
#include "Arduino.h"
#include "Printf.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (!Serial);

#ifdef  ARDUINO_UNOR4_WIFI
  // UNO R4 WiFi needs to wait for a while to complete Serial initialization.
  delay(1000); // It requires at least 600 ms.
#endif

  u_int32_t t = micros();

#define EPSILON 0.00001

  for (float f = 0.0; f <= 1.0 + EPSILON; f += 0.01) {
    printf("f = %5.3f\n", f);
    printf("e = %5.3e\n", f);
  }

  Serial.println(micros() - t);
}

void loop() {
  // put your main code here, to run repeatedly:
}
