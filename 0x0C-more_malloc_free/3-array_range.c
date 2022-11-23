#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Function creates an array of integers
 * @min: Values starting
 * @max: Values ending
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int size, i, j;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)

	size = i;
	arr = malloc(sizeof(int) * size);

	if (arr == 0)
	{
		return (NULL);
	}

	for (i = 0, j = min; j <= max; i++, j++)
	{
		arr[i] = j;

		if (min == max)
		{
			arr[i] = max;
		}
	}
	return (arr);
}
