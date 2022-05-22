#include "main.h"

/**
 * _printf - Prints a format specifiers variable
 * @format: format specifiers
 *
 *
 * Return: Returns the total number of printed character
 */
int _printf(const char *format, ...)
{
	int i, count_ch;
	char *s = NULL;

	va_list ap;

	va_start(ap, format);
	count_ch = 0;

	if (!format)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count_ch++;
		}
		else if (!format[i + 1])
			return (-1);
		else if (format[i + 1] == ' ' && !format[i + 2])
			return (-1);
		else if (format[i + 1] == 'c')
		{
			_putchar(va_int);
			count_ch++, ++i;
		}
		else if (format[i + 1] == 's')
		{
			if (!va_char)
				return (-1);
			s = va_char;
			print_str(s);
			++i;
		}
		else if (format[i + 1] == '%')
		{
			_putchar(format[i + 1]);
			count_ch++, ++i;
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			print_number(va_int);
			++i;
		}
	}
	va_end(ap);
	return (count_ch);
}
