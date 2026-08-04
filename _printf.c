#include "main.h"
#include <stdio.h>

/**
 * _printf - produces output according to a format
 * @format: char string with format directives
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	int print_count;
	va_list args;

	va_start(args, format);

	i = 0;
	print_count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case('c'):
					print_count = print_count + print_char(args);
					i = i + 2;
					continue;
				case('s'):
					print_count = print_count + print_string(args);
					i = i + 2;
					continue;
			}
		}
		_putchar(format[i]);
		print_count = print_count + 1;
		i = i + 1;

	}
	va_end(args);

	return (print_count);
}
