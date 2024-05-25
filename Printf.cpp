/*
 * printf() to the serial console through the 'Serial'.
 */
#include "Printf.h"

#define PRINTF_BUF_SIZE  256

int printf(const char* fmt, ...) {
	int len = 0;
	char buf[PRINTF_BUF_SIZE];

	va_list arg_ptr;
	va_start(arg_ptr, fmt);
	len = vsnprintf(buf, PRINTF_BUF_SIZE, fmt, arg_ptr);
	va_end(arg_ptr);

	// output to the serial console through the 'Serial'
#if	1
	len = Serial.write((uint8_t*)buf, (size_t)len);
#else
	len = Serial.print(buf);
#endif

#if defined(ARDUINO_UNOWIFIR4) && 1
	delay(2); // UNO R4 WiFi needs some delay to fix buffer overrun
#endif

	return len;
}
