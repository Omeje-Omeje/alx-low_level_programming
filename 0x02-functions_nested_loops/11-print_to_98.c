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
	int i, k = 0, m = 0;

	if (n > 98)
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
	for (i = n; i <= 98; i++, k++)
	{
		if (k > 0)
		{
			putchar(',');
			putchar(' ');
		}
		printf("%d", i);
		if (n < 0)
		{
			for (i = n; i <= 98; i++)
			{
				putchar(',');
				putchar(' ');
				printf("%d", i);
			}
		}
	}
	putchar('\n');
}
