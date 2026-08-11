#include "main.h"
#include <stdio.h>

/**
 * printer -
 */
int printer(char specifier, va_list *args, int *i)
{
	switch (specifier)
	{
		case('\0'):
			return (-1);
		case('%'):
			_putchar('%');
			*i = *i + 2;
			return 1;
		case('c'):
			*i = *i + 2;
			return print_char(args);
		case('s'):
			*i = *i + 2;
			return print_string(args);
		case('i'):
			*i = *i + 2;
			return print_int(args);
		case('d'):
			*i = *i + 2;
			return print_int(args);
		default:
			*i = *i + 1;
			_putchar('%');
			return 1;
	}
}

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
	int result;

	va_start(args, format);

	i = 0;
	print_count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			result = printer(format[i + 1], &args, &i);
			if (result == -1)
				return result;
			else
				print_count = print_count + result;
		}
		else
		{
			_putchar(format[i]);
			print_count = print_count + 1;
			i = i + 1;
		}
	}
	va_end(args);

	return (print_count);
}
