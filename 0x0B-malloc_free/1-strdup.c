#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that reurns pointer to a newly allocated space in memory
 * @str: Operand
 *
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	i = 0;
	j = 1;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		j++;
	}
	ptr = malloc(sizeof(char) * j + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < j)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
