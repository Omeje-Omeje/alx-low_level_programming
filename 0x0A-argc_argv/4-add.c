#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * num_check - Function to check for numbers
 * @s: First operand
 *
 * Return: Always 0 (Success)
 */

int num_check(char *s)
{
	unsigned int i;

	i = 0;

	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - Function to print sum of numbers
 * @argc: First operand
 * @argv: Second operand
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	i = 1;

	while (i < argc)
	{
		if (num_check(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
