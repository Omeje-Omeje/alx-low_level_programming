#include "main.h"
#include <stddef.h>
/**
 * _strstr - Function that returns a substring in a string
 * @haystack: First operand
 * @needle: Second operand
 *
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && _strcmp(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
