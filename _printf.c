#include "main.h"
#include <stdio.h>
#include <stdarg.h>

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
	char *word;
	va_list args;

	va_start(args, format);

	i = 0;
	print_count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				print_count = print_count + 1;
				i = i + 2;
				continue;
			}
			else if (format[i + 1] == 's')
			{
				word = va_arg(args, char*);
				while (*word != '\0')
				{
					_putchar(*word);
					word++;
					print_count = print_count + 1;
				}
				i = i + 2;
				continue;
			}
		}
		_putchar(format[i]);
		print_count = print_count + 1;
		i = i + 1;
	}

	va_end(args);

	_putchar('\n');
	printf("%d \n", print_count);
	return (i);
}
