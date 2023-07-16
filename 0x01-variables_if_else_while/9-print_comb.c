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
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
