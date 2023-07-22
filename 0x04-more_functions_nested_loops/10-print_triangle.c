#include "main.h"

/**
 * print_triangle - Function to print triangle
 * @size: Operand
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i, j, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (s = size - i + 1; s >= 0; s--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
