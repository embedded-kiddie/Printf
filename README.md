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
  Serial.begin(115200);
  while (!Serial);

#ifdef  ARDUINO_UNOR4_WIFI
  // UNO R4 WiFi needs to wait for a while to complete Serial initialization.
  delay(1000); // It requires at least 600 ms.
#endif

  for (float f = 0.0; f <= 1.0 + EPSILON; f += 0.01) {
    printf("f = %4.2f\n", f);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
```