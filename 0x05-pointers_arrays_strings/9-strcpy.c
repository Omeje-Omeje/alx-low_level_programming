#include "main.h"

/**
 * *_strcpy - Function to copy strings from one destination to another
 * @dest: First operand
 * @src: Second operand
 *
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}
