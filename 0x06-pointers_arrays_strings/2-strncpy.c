#include "main.h"
#include <stddef.h>

/**
 * _strncpy - Function to copy string
 * @dest: Param one
 * @src: Param two
 * @n: Param three
 *
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *begin = dest;
	if (dest == NULL)
	{
		return (NULL);
	}

	while (*src != '\0' && n--)
	{
		*dest = *src;

		dest++;
		src++;
	}
	*dest = '\0';
	return (begin);
}
