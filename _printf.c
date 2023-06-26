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
 * _printf - Prints output according to a format.
 * @format: Input format string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int index, num_char = 0;
	char *s;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == 'c')
			{
				int c = va_arg(args, int);

				num_char += print_character(c);
			}
			else if (format[index] == 's')
			{
				s = va_arg(args, char *);
				num_char += print_string(s);
			}
			else if (format[index] == '%')
			{
				num_char += print_character('%');
			}
			else
			{
				_putchar('%');
				_putchar(format[index]);
				num_char += 2;
			}
		}
		else
		{
			num_char += print_character(format[index]);
		}
	} va_end(args);
	return (num_char);
}
