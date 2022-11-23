#include "main.h"
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
	int *arrfinal;

	if (min > max)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)

	size = i + 1;

	arrfinal = malloc(sizeof(int) * size);

	if (arrfinal == 0)
	{
		return (NULL);
	}

	for (i = 0, j = min; j <= max; i++, j++)
	{
		arrfinal[i] = j;
		if (max == min)
		{
			arrfinal[i] = max;
		}
	}

	return (arrfinal);
}


