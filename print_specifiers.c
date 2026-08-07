#include "main.h"
#include <stddef.h>

/**
 * print_char - Adds character to stdout
 * @args: variadic list arguments
 *
 * Return: int (1)
 */
int print_char(va_list args)
{
	int char_arg;

	char_arg = va_arg(args, int);
	_putchar(char_arg);
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
	if (word == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');

		count = count + 6;
		return (count);
	}
	while (*word != '\0')
	{
		_putchar(*word);
		word++;
		count = count + 1;
	}
	return (count);
}
