#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
/**
 * interpolation_search - Function searches for a value in a sorted
 * array of intergers using interpolation search algorithm
 * @array: Pointer to 1st element in array
 * @size: Size of array/ number of elements in array
 * @value: Value to search for
 * Return: -1 or index of value
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t start, end, pos;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	start = 0;
	end = size - 1;

	while (start <= end && value >= array[start] && value <= array[end])
	{
		pos = start + (((double)(end - start) /
			(array[end] - array[start])) * (value - array[start]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return ((int)pos);
		}

		if (array[pos] < value)
		{
			start = pos + 1;
		}
		else
		{
			end = pos - 1;
		}
	}

	printf("Value checked array[%lu] is out of range\n", start);

	return (-1);
}
