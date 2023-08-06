#include "main.h"
#include <stdio.h>
/**
 * print_args - Function that prints all arguments
 * @argc: First operand
 * @argv: Second operand
 *
 * Return: Always 0 (Success)
 */

void print_args(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
