#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Function searches for a value in array of integers using
 * @array: Pointer to first element of the array to search
 * @size: Number of elements in array
 * @value: Value to find
 * Return: -1 if value is not present or NULL, else first index where value is
 * located
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{

		printf("Value checked array[%u] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
