# printf() to the Serial for Arduino UNO R4

This library allows you to output a format string to the serial monitor through the `Serial` like C printf() to the `stdio`.

**Note**: This library might be useful only for Arduino UNO R4 Minima/WiFi.

## Usage

```C++
#include "Arduino.h"
#include "Printf.h"

#define EPSILON 0.00001

void setup() {
  // put your setup code here, to run once:
  Serial.begin(250000);
  delay(1000); // `while (!Serial);` is not enough for UNO R4 WiFi

  for (float f = 0.0; f <= 1.0 + EPSILON; f += 0.01) {
    printf("f = %4.2f\n", f);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
```