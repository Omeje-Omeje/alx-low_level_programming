#include "main.h"

/**
 *  _strspn - Function that gets the length of a prefix substring
 *  @s: First operand
 *  @accept: Second operand
 *
 *  Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (len);
			}
		}
		s++;
	}
	return (len);
}
