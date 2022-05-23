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
	int i = 0;
	int j = 0;

	char *c = malloc(sizeof(str) + 1);

	if (c == NULL)
		return (0);
	if (str == '\0')
		_printf("(null)");

	c = str;
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
		j++;
	}
	return (j);
}
