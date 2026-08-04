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
	int specifier_count;

	i = 0;
	specifier_count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			specifier_count = specifier_count + 1;
		}
		_putchar(format[i]);
		i = i + 1;
	}
	
	_putchar('\n');
	_putchar(specifier_count + '0');
	return (i);
}
