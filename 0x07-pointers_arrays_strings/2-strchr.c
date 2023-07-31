#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function to find char in a string
 * @s: First operand
 * @c: Second operand
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	char *foundChar = NULL;

	if (s != NULL)
	{
		do {
			if (*s == (char)c)
			{
				foundChar = s;
				break;
			}
		} while (*s++);
	}
	return (foundChar);
}
