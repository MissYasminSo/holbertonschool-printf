#include "main.h"
#include <stddef.h>

/**
 * print_char - Adds character to stdout
 * @args: variadic list arguments
 *
 * Return: int (1)
 */
int print_char(va_list *args)
{
	int char_arg;

	char_arg = va_arg(*args, int);
	_putchar(char_arg);
	return (1);
}

/**
 * print_string - Adds string to stdout
 * @args: variadic list arguments
 *
 * Return: Number of characters printed
 */
int print_string(va_list *args)
{
	int count;
	char *word;

	count = 0;
	word = va_arg(*args, char*);
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

/**
 * print_int - Add integer to stdout
 * @args: variadic list arguments
 *
 * Return: Number of characters printed
 */
int print_int(va_list *args)
{
	int count;
	long nums;
	long rev_nums;
	int num_length;

	count = 0;
	nums = va_arg(*args, int);
	rev_nums = 0;
	num_length = 0;

	if (nums == 0)
	{
		_putchar('0');
		count = count + 1;
	}

	if (nums < 0)
	{
		_putchar('-');
		nums = nums * -1;
		count = count + 1;
	}

	while (nums > 0)
	{
		rev_nums = rev_nums * 10;
		rev_nums = rev_nums + (nums % 10);
		nums = nums / 10;
		num_length = num_length + 1;
	}

	while (num_length > 0)
	{
		_putchar(rev_nums % 10 + '0');
		count = count + 1;
		rev_nums = rev_nums / 10;
		num_length = num_length - 1;
	}

	return (count);
}
