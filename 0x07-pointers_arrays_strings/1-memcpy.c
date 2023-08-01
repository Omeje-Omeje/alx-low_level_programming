#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: First operand
 * @src: Second operand
 * @n: Third operand
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
