#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: First operand
 * @b: Second operand
 * @n: Third operand
 *
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
