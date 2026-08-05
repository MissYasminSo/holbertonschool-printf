#include <stdio.h>
#include <sys/wait.h>
#include "main.h"

void test(void)
{
	int expected;
	int actual;
    char char_a;
	char char_b;
	char *string_hello;
	char *string_world;
	int passed;

	printf("Start of Tests:\n\n");

	char_a = 'a';
	char_b = 'b';
	string_hello = "hello";
	string_world = "world";
	passed = 1;

	printf("Empty Case\n");
	actual = _printf("");
	printf(" : ");
	expected = printf("");
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}

	printf("No Format Specifier Case\n");
	actual = _printf("Hello World!");
	printf(" : ");
	expected = printf("Hello World!");
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}

	printf("Percent Case:\n");
	actual = _printf("%");
	printf(" : ");
	expected = printf("%");
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}

	printf("Percent Percent Case:\n");
	actual = _printf("%%");
	printf(" : ");
	expected = printf("%%");
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}

	printf("Printf String with Percent Case:\n");
	actual = _printf("Should print a single percent sign: %%\n");
	printf(" : ");
	expected = printf("Should print a single percent sign: %%\n");
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}

	printf("Single Character Specifier Case:\n");
	actual = _printf("%c", char_a);
	printf(" : ");
	expected = printf("%c", char_a);
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}

	printf("Single String Specifier Case:\n");
	actual = _printf("%s", string_hello);
	printf(" : ");
	expected = printf("%s", string_hello);
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}

	printf("Double Character Specifier Case:\n");
	actual = _printf("%c%c", char_a, char_b);
	printf(" : ");
	expected = printf("%c%c", char_a, char_b);
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}

	printf("Double String Specifier Case:\n");
	actual = _printf("%s%s", string_hello, string_world);
	printf(" : ");
	expected = printf("%s%s", string_hello, string_world);
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}

	printf("Combination Character Specifier and String Specifier Case:\n");
	actual = _printf("%c%s", char_a, string_world);
	printf(" : ");
	expected = printf("%c%s", char_a, string_world);
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}

	printf("Combination String Specifier and Character Specifier Case:\n");
	actual = _printf("%s%c", string_hello, char_b);
	printf(" : ");
	expected = printf("%s%c", string_hello, char_b);
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}

	printf("Printf String and Character Specifier Case:\n");
	actual = _printf("Hello %c World!", char_a);
	printf(" : ");
	expected = printf("Hello %c World!", char_a);
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}

	printf("Printf String and String Specifier Case:\n");
	actual = _printf("Hello %s World!", string_hello);
	printf(" : ");
	expected = printf("Hello %s World!", string_hello);
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}

	printf("String and Character Specifier and Percent Case:\n");
	actual = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf(" : ");
	expected = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}


	printf("String Specifier But No arg Case:\n");
	actual = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf(" : ");
	expected = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("\nActual: %d Expected %d\n", actual, expected);
	if (actual == expected)
		printf("Success\n\n");
	else
	{
		passed = 0;
		printf("Failed\n\n");
	}

	printf("End of Test: ");
	if (passed)
		printf("All Test Passed!\n");
	else
		printf("Failed\n");
}
