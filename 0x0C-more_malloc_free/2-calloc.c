#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: First operand
 * @size: Second operand
 *
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = (char *) malloc(size * nmemb);

	if (a == NULL)
	{
		return (NULL);
	}
	n = 0;

	while (n < (nmemb * size))
	{
		a[n] = 0;
		n++;
	}
	return (a);
}
