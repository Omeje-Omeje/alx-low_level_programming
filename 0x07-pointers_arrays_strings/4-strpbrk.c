#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Function to print the first char in a string
 * @s: First operand
 * @accept: Second operand
 *
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
