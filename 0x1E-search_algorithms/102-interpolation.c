#include "search_algos.h"
#include <stddef.h>
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
	
	if (array == NULL)
	{
		return (-1);
	}
	start = 0;
	end = size - 1;

	while (start <= end && value >= array[start] && value <= array[end])
	{
		pos = start + ((value - array[start]) * (end - start)) / (array[end] - array[start]);
		if (array[pos] == value)
		{
			return pos;
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

	return (-1);
}

