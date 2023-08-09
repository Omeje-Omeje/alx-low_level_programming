#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free function
 * @grid: First operand
 * @height: Second operand
 *
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int j;

	j = 0;

	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
