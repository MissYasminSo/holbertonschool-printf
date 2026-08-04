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

	i = 0;
	while (format[i] != '\0')
	{
		_putchar(format[i]);
		i = i + 1;
	}
	
	_putchar('\n');
	return (0);
}
