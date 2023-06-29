#include "main.h"

/**
 * print_character - Prints a single character.
 * @c: The character to print.
 * Return: The number of characters printed.
 */
int print_character(char c)
{
	_putchar(c);
	return (1);
}

/**
 * print_string - Prints a string.
 * @s: The string to print.
 * Return: The number of characters printed.
 */
int print_string(char *s)
{
	int count = 0;

	if (s == NULL)
		s = "(null)";

	while (*s)
	{
		_putchar(*s);
		count++;
		s++;
	}
	return (count);
}

/**
 * not_specifier - prints % and the character
 *                 after it if specifier not identified.
 * @format: input string.
 * @index: current index.
 * Return: the number of characters printed.
 */
int not_specifier(const char *format, int index)
{
	int num_char = 0;

	_putchar('%');
	_putchar(format[index]);
	num_char += 2;
	return (num_char);
}

/**
 * print_integer - Prints and integer.
 * @n: The integer to print.
 * Return: the number of integers printed.
 */
int print_integer(int n)
{
	int rev_int = 0;
	int num_char = 0;


	if (n < 0)
	{
		_putchar('-');
		num_char += 1;
		n = n * -1;
	}

	while (n != 0)
	{
		rev_int = rev_int * 10 + n % 10;
		n /= 10;
		num_char += 1;
	}

	while (rev_int != 0)
	{
		_putchar('0' + rev_int % 10);
		rev_int /= 10;
	}
	return (num_char);
}

