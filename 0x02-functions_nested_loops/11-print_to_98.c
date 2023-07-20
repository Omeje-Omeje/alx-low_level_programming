#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function to print natural numbers
 * @n: First operand
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i, k = 0, j = 0, m = 0;

	for (i = n; i <= 98; i++, k++)
	{
		if (k > 0)
		{
			putchar(',');
			putchar(' ');
		}
		if (n < 0)
		{
			for (i = n; i <= 98; i++, j++)
			{
				if (j > 0)
				{
					putchar(',');
					putchar(' ');
				}
				printf("%d", i);
			}
		}
		else if (n > 98)
		{
			for (i = n; i >= 98; i--, m++)
			{
				if (m > 0)
				{
					putchar(',');
					putchar(' ');
				}
				printf("%d", i);
			}
		}
		else
		{
			printf("%d", i);
		}
	}
	putchar('\n');
}
