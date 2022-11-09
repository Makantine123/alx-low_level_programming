#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Function returns a pointer to
 * a 2 dimensional array of intergers
 * @width: Width/Columns of array
 * @height: Height/Rows of array
 * Return: NULL if failure, NULL if width and height equal 0
 */
int **alloc_grid(int width, int height)
{
	int **pud;
	int i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	pud = (int **) malloc(sizeof(int *) * height);

	if (pud == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		pud[i] = (int *) malloc(sizeof(int) * width);

		if (pud[i] == NULL)
		{
			free(pud);
			for (j = 0; j <= i; j++)
			{
				free(pud[j]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			pud[i][j] = 0;
		}
	}
	return (pud);
}
