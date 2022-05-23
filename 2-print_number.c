#include "main.h"

/**
 * print_number - print out a number in base 10
 * @num: pass the number as arg to the func
 * _printf - print out the character
 *
 * Return: returns the number of character printed
 */

int print_number(int num)
{
	int i = 0;

	if (num < 0)
	{
		_putchar('-');
		i++;
		num = -num;
		i += print_number(num / 10);
	}
	else if (num > 9)
	{
		i += print_number(num / 10);
	}
	_putchar('0' + (num % 10));
	i++;
	return (i);
}
