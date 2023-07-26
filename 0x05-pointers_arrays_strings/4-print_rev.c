#include "main.h"

/**
 * print_rev - Function to print the reverse
 * @s: Operand
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int i = 0, j;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	s--;

	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
