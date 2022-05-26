#include "main.h"
#include <stdlib.h>

/**
 * print_str - print a string
 * _putchar - print out a character
 * @str: argument that passes the variable
 *
 * Return: Returns the number of character printed
 */


int print_str(char *str)
{
	int a = 0;
	int b = 0;

	char *c = malloc(sizeof(str) + 1);

	if (c == NULL)
		return (0);
	if (!str)
		b += _printf("(null)");

	c = str;
	while ([a] != '\0')
	{
		_putchar(c[i]);
		a++;
		b++;
	}
	return (b);
}
