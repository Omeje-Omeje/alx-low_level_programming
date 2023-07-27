#include "main.h"

/**
 * _strcat - Funtion to concatenete string
 * @dest: First operand
 * @src: Second operand
 *
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	char *begin = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}
	*dest = '\0';
	return (begin);
}
