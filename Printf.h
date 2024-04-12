#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>

#include "Arduino.h"
#include "Serial.h"

int Printf(const char* fmt, ...);

#define printf(...)  Printf(__VA_ARGS__);

#endif /* PRINTF_H */
