#include "main.h"

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
	if(char_arg != 0)
		_putchar(char_arg);
	else
	{
		_putchar('(');
	}
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
