#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees a 2 dimentional grid previosly
 *  created by your alloc_grid
 *  @grid: Pointer to 2 dimensional array
 *  @height: Height of 2 dimensional array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
