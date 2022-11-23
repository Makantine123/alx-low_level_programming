#include "main.h"
#include <stdlib.h>
/**
 * array_range - Function creates an array of integers
 * @min: Values starting
 * @mac: Values ending
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

	for (j = min; j < max; j++)
	{
		arrfinal[j] = j;
	}
	
	return (arrfinal);
}


