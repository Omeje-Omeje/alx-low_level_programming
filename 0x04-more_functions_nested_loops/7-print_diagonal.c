#include "main.h"

/**
 * print_diagonal - Function to print diagonal line
 * @n: Operand
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i, s;

	for (i = 0; i < n; i++)
	{
		for (s = n; s < n + i; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

