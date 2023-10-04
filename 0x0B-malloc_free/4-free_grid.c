#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  created by your alloc_grid
 * @grid: pointer integer to pointer
 * @height: integer input
 *
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
