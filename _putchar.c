#include <unistd.h>

/**
 * _putchar - print out a character to the std out
 * @c: argument that pass the character
 *
 * Return: Returns the character.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
