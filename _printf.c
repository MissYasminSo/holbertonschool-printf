#include "main.h"
#include <stdio.h>

/**
 * printer - Prints input based on specifier
 * @specifier: Data type to be printed
 * @args: Pointer to variadic list
 * @i: Index of string to be printed
 *
 * Return: Number of characters printed
 */
int printer(char specifier, va_list *args, int *i)
{
	int j;

	specifier_t specifiers[] = {
		{'%', print_percent},
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'u', print_unsigned_int},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_hex_upper},
		{'b', print_binary},
		{'\0', NULL}
	};

	if (specifier == '\0')
		return (-1);

	j = 0;
	while (specifiers[j].data_type != '\0')
	{
		if (specifier == specifiers[j].data_type)
		{
			*i = *i + 2;
			return (specifiers[j].print(args));
		}
		j = j + 1;
	}

	*i = *i + 1;
	return (print_percent(args));
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
				return (result);
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
