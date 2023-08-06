#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Print sum of positive numbers
 * @argc: First operand
 * @argv: Second operand
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
