#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct specifier_s
{
	char data_type;
	int (*print)(va_list *);
} specifier_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list *args);
int print_string(va_list *args);
int print_int(va_list *args);
int print_percent(va_list *args);
int print_unsigned_int(va_list *args);
int print_octal(va_list *args);
int print_hex(va_list *args);
int print_hex_upper(va_list *args);

#endif
