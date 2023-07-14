/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

#include <stdio.h>

int main(void)
{

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %li byte(s)\n", (sizeof(long double));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);
}
