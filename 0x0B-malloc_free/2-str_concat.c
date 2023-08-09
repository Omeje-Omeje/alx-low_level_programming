#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - Function that concatenates two strings
 * @s1: First operand
 * @s2: Second operand
 *
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
