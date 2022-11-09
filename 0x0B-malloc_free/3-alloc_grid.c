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
	int **arr;
int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
			{
				free(arr[j]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
