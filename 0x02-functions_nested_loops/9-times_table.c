#include "main.h"
#include <stdio.h>

/**
 * times_table - Function that prints 9 times table
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, j, n = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++, n++)
		{
			if (n > 0)
			{
				if (j > 0 && j <= 9)
				{
					if ((i * j) >= 0 && (i * j) <= 9 && j >= 0 && j <= 9)
					{
						putchar(',');
						putchar(' ');
						putchar(' ');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			printf("%d", i * j);
		}
		putchar('\n');
	}
}
