#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Adds character to stdout
 * @args: variadic list arguments
 *
 * Return: int (1)
 */
int print_char(va_list args)
{

	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - Adds string to stdout
 * @args: variadic list arguments
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	int count;
	char *word;

	count = 0;
	word = va_arg(args, char*);
	while (*word != '\0')
	{
		_putchar(*word);
		word++;
		count = count + 1;
	}
	return (count);
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

	_putchar('\n');
	printf("%d \n", print_count);
	return (i);
}
