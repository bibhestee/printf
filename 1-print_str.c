#include "main.h"
#include <stdlib.h>

/**
 * print_str - print a string
 * _putchar - print out a character
 * @c: argument that pass the variable
 *
 * Return: Returns the number of character printed
 */


int print_str(char *str)
{
	int i;
	int j = 0;

	char* c = malloc(sizeof(str));

	c = str;
	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
		j++;
	}
	return (j);
}
