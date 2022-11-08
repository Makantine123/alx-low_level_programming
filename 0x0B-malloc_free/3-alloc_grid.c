#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Function returns a pointer to a 2 dimensional array of intergers
 * @width: Width/Columns of array
 * @height: Height/Rows of array
 * Return: NULL if failure, NULL if width and height equal 0
 */
int **alloc_grid(int width, int height)
{
	int i, k;
	int **grd;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	grd = (int**)malloc(width * sizeof(int*));
	for (i = 0; i < width; i++)
	{
		grd[i] = (int*)malloc(height * sizeof(int));
	}

	for (i = 0; i < width; i++)
	{
		for (k = 0; k < height; k++)
		{
			grd[i][k] = 0;
		}
	}

	for (i = 0; i < width; i++)
	{
		free (grd[i]);
	}

	free (grd);

	return (0);

}
