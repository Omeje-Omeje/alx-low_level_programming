#include "main.h"

/**
 * _puts - Function to print strings to stdout
 * @str: Operand
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
