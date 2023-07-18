#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;
	char *separator = "";

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			fputs(separator, stdout);
			separator = ", ";
			putchar('0' + i);
			putchar('0' + j);
		}
	}
	putchar('\n');
	return (0);
}
