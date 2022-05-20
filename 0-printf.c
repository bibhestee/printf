#include "main.h"
#include <stdarg.h>

/**
 * _printf - Prints a format specifiers variable
 * @format: format specifiers
 *
 *
 * Return: Returns the total number of printed character
 */

int _printf(const char *format, ...)
{
	int i, j, count_ch;
	char c;

	va_list ap;

	va_start(ap, format);
	count_ch = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count_ch += 1;
		}
		else if (format[i + 1] == 'c')
		{
			c = va_arg(ap, int);
			_putchar(c);
			++i;
			count_ch += 1;
		}
		else if (format[i + 1] == 's')
		{
			print_str(va_arg(ap, char*));
			j = print_str(va_arg(ap, char*));
			count_ch += j;
			++i;
		}

	}
	va_end(ap);
	return (count_ch);
}
