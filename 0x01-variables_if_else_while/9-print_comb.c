#include <stdio.h>
/**
 * main - Function to print numbers separated by comma
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i > 0 && i <= 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('0' + i);
	}
	putchar('\n');

	return (0);
}
