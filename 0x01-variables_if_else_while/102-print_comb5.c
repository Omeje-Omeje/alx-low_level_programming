#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, n = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++, n++)
		{
			if (n > 0)
			{
				putchar(',');
				putchar(' ');
			}
			putchar('0' + i);
			putchar('0' + j);
		}
	}
	putchar('\n');
	return (0);
}
