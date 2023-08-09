#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - create array
 * @size: Operand one
 * @c: Operand two
 *
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	j = 0;

	while (j < size)
	{
		ptr[j] = c;
		j++;
	}
	return (ptr);
}
