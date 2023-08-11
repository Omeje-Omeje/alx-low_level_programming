#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Function that creates an array of integers
 * @min: First operand
 * @max: Second operand
 *
 * Return: Always 0 (Success)
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
