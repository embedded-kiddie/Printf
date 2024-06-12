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
#if	defined(ARDUINO_UNOR4_MINIMA)

	len = Serial.write((uint8_t*)buf, (size_t)len);

#else // ARDUINO_UNOR4_WIFI

	len = Serial.print(buf);

#endif

	return len;
}
