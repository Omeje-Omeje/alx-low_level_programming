#include "main.h"

/**
 * print_line - Function that print line
 * @n: Operand
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
