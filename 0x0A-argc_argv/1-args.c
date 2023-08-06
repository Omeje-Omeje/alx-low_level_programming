#include "main.h"
#include <stdio.h>

/**
 * main - Function to print the number of arguments passed
 * @argc: First operand
 * @argv: Second operand
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
