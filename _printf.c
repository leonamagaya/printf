#include "main.h"
#include <stdarg.h>
/**
 * _printf -  function that produces output according
 *            to a format.
 * @format: input string.
 * Return: number of characters.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int num_char = 0, index, c;
	char *s;

	va_start(args, format);
	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			index++;
			switch (format[index])
			{
				case 'c':
					c = va_arg(args, int);
					_putchar(c);
					num_char++;
					break;
				case 's':
					for (s = va_arg(args, char *); *s; s++)
					{
						_putchar(*s);
						num_char++;
					}
					break;
				case '%':
					_putchar('%');
					num_char++;
					break;
				default:
					break;
			}
		}
		else
		{
			_putchar(format[index]);
			num_char++;
		}
		num_char++;
	}
	va_end(args);
	return (num_char);
}

