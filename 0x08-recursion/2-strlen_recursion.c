#include "main.h"

/**
 * _strlen_recursion - Print the length of string
 * @s: Operand one
 *
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
