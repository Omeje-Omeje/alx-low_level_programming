#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Operand one
 *
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
