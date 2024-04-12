#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>

#include "Arduino.h"
#include "Serial.h"

int printf(const char* fmt, ...);

#endif /* PRINTF_H */
