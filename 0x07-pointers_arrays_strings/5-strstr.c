#include "main.h"

/**
 * _strstr - Function that returns a substring in a string
 * @haystack: First operand
 * @needle: Second operand
 *
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *ptr = needle;

		while ((*c == *ptr) && (*ptr != '\0'))
		{
			c++;
			ptr++;
		}
		if (*c == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
