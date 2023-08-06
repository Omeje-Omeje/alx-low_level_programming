#include "main.h"

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
		_putchar(argv[i]);
		_putchar('\n');
	}
}
