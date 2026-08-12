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
	char *null_word = "(null)";

	count = 0;
	word = va_arg(*args, char*);
	if (word == NULL)
	{
		while (*null_word != '\0')
		{
			_putchar(*null_word);
			null_word++;
		}
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
 * print_unsigned_int - Add unsigned integer to stdout
 * @args: variadic list arguments
 *
 * Return: Number of characters printed
 */
int print_unsigned_int(va_list *args)
{
	int count;
	unsigned long int nums;
	unsigned long int rev_nums;
	int num_length;

	count = 0;
	nums = va_arg(*args, unsigned int);
	rev_nums = 0;
	num_length = 0;

	if (nums == 0)
	{
		_putchar('0');
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

/**
 * print_binary - Add binary to stdout
 * @args: variadic list arguments
 *
 * Return: Number of characters printed
 */
int print_binary(va_list *args)
{
	int count;
	unsigned int nums;
	unsigned int rev_nums;
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

	while (nums > 0)
	{
		rev_nums = rev_nums * 2;
		rev_nums = rev_nums + (nums % 2);
		nums = nums / 2;
		num_length = num_length + 1;
	}

	while (num_length > 0)
	{
		_putchar(rev_nums % 2 + '0');
		count = count + 1;
		rev_nums = rev_nums / 2;
		num_length = num_length - 1;
	}

	return (count);
}

/**
 * print_octal - Add octal to stdout
 * @args: variadic list arguments
 *
 * Return: Number of characters printed
 */
int print_octal(va_list *args)
{
	int count;
	unsigned long int nums;
	unsigned long int rev_nums;
	int num_length;

	count = 0;
	nums = va_arg(*args, unsigned int);
	rev_nums = 0;
	num_length = 0;

	if (nums == 0)
	{
		_putchar('0');
		count = count + 1;
	}

	while (nums > 0)
	{
		rev_nums = rev_nums * 8;
		rev_nums = rev_nums + (nums % 8);
		nums = nums / 8;
		num_length = num_length + 1;
	}

	while (num_length > 0)
	{
		_putchar(rev_nums % 8 + '0');
		count = count + 1;
		rev_nums = rev_nums / 8;
		num_length = num_length - 1;
	}

	return (count);
}

/**
 * print_hex - Add hex to stdout
 * @args: variadic list arguments
 *
 * Return: Number of characters printed
 */
int print_hex(va_list *args)
{
	int count;
	unsigned long int nums;
	unsigned long int rev_nums;
	int num_length;
	int digit;

	count = 0;
	nums = va_arg(*args, unsigned int);
	rev_nums = 0;
	num_length = 0;

	if (nums == 0)
	{
		_putchar('0');
		count = count + 1;
	}

	while (nums > 0)
	{
		rev_nums = rev_nums * 16;
		rev_nums = rev_nums + (nums % 16);
		nums = nums / 16;
		num_length = num_length + 1;
	}

	while (num_length > 0)
	{
		digit = rev_nums % 16;
		if (digit > 10)
			_putchar(digit - 10 + 'a');
		else
			_putchar(digit + '0');
		count = count + 1;
		rev_nums = rev_nums / 16;
		num_length = num_length - 1;
	}

	return (count);
}

/**
 * print_hex_upper - Add uppercase hex to stdout
 * @args: variadic list arguments
 *
 * Return: Number of characters printed
 */
int print_hex_upper(va_list *args)
{
	int count;
	unsigned long int nums;
	unsigned long int rev_nums;
	int num_length;
	int digit;

	count = 0;
	nums = va_arg(*args, unsigned int);
	rev_nums = 0;
	num_length = 0;

	if (nums == 0)
	{
		_putchar('0');
		count = count + 1;
	}

	while (nums > 0)
	{
		rev_nums = rev_nums * 16;
		rev_nums = rev_nums + (nums % 16);
		nums = nums / 16;
		num_length = num_length + 1;
	}

	while (num_length > 0)
	{
		digit = rev_nums % 16;
		if (digit > 10)
			_putchar(digit - 10 + 'A');
		else
			_putchar(digit + '0');
		count = count + 1;
		rev_nums = rev_nums / 16;
		num_length = num_length - 1;
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

/**
 * print_percent - print a percent character
 * @args: variadic list arguments
 *
 * Return: int (1)
 */
int print_percent(va_list *args)
{
	(void) *args;

	_putchar('%');
	return (1);
}
