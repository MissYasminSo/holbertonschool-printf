# holbertonschool-printf

A function that produces output according to a format. (Replicating a simplified version of the printf function).

## Prototype

```int _printf(const char *format, ...);```

## Description

The functions within the ```_printf()``` function produces output according to a format as described below. The function takes a string as the first input (mandatory) and prints it directly to the stdout for the user to observe. These strings can contain format specifiers which allow the user to output dynamically using variables of different data types. The arguments thereafter will replace the format specifierswithin the format string when it is displayed in the stdout, provided they are of the correct data type.

### Format String Example

The format string should be contained within double quotation marks. E.g. "Hello World". To use a form at specifier within the string, a percentage sign (%) followed by a character that represents one of the data types (c, s, i, d, u, o, x, X, b) should be added. E.g. "Hello %s".

### Format Specifiers

- c: Use this format specifier to print a single character to the stdout. Character must be a valid value within the ASCII table. This could be represented as an integer or between single quote marks (''). E.g. ```_printf("Hello World%c", '!');``` or ```_printf("Hello World%c", 33)```.

- s: Use this format specifier to print an array of characters to the stdout. Character array must be surrounded by double quotation marks if entered as a string literal, else variable must be a valid pointer to a character array. E.g. ```_printf("Hello %s", "World");``` or ```_printf("Hello %s", str)``` where str[] == "World".

- i and d: Both i and d produce identical results. Use these specifiers to print an integer to the stdout. The number must be a valid integer within the range of INT_MIN and INT_MAX (inclusive) to have defined behaviour. E.g. ```_printf("Uliana has %i apples.", 9)``` or ```_printf("Uliana has %d apples.", 9)```.

- u: Use this format specifier to print a non-negative integer. The number must be a valid non-negative integer within the range 0 and UINT_MAX (inclusive). E.g. ```_printf("Munya has %u mandarins.", 7)```.

- o: Use this format specifier to print a base-8 digit. The number must be a valid non-negative integer within the range 0 and UINT_MAX (inclusive). E.g. ```_printf("Aladar has %o nectarines.", 8)```.

- x: Use this format specifier to print a lowercase base-16 digit/character. The number must be a valid non-negative integer within the range 0 and UINT_MAX (inclusive). E.g. ```_printf("Yasmin has %x strawberries.", 16)```.

- X: Use this format specifier to print an uppercase base-16 digit. The number must be a valid non-negative integer within the range 0 and UINT_MAX (inclusive). E.g. ```_printf("Sebastion has %X mangoes.", 10)```.

- b: Use this format specifier to print base-2 digits. The number must be a valid non-negative integer within the range 0 and UINT_MAX (inclusive). E.g. ```_printf("Jonathan has %X bananas.", 19)```.

`How many fruits does the group have?`

## Return Value

Function returns amount of characters printed to stdout upon success.

## Limitations

- Inefficient Memory Use: When using any number based format specifier (i, d, u, o, x, X), the functions used to print the digits are stored in long data types. This should only be applicable for numbers outside of the range of INT_MIN to INT_MAX. Ideally the numbers inside this range would only use int data types.

- Duplicate Code: When printing digits to the stdout, we don't use a dedicated function to transform digits to a character and have duplicate code blocks. We could have had a specific helper function instead of redundant code.

- Simplified Version of ```printf()```: Only implemented a limited amount of format specifiers, didn't include flags, field width or precision.

- Difference in stdout between clang and gcc for invalid format specifier. For example %K, should output "%K", however with clang, the output is "K". Binary format specifier also does not translate in clang while it works with gcc.
