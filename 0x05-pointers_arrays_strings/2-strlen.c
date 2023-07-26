#include "main.h"

/**
 * _strlen - Function that return the length of a string
 * @s: Operand
 *
 * Return: The length
 */

int _strlen(char *s)
{
	int i = 0;

	/* Loop that runs till the end of string */
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
