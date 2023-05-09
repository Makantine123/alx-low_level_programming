#include "search_algos.h"
#include <math.h>
#include <stddef.h>
#include <stdio.h>
/**
 * jump_search - Function searches for a value in sorted array of integers
 * using the Jump Search Algorithm
 * @array: Pointer to first element of array
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index of value, else -1 if array is NULL or value not found
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump, step, i;

	if (array == NULL)
	{
		return (-1);
	}

	step = sqrt(size);
	jump = i = 0;
	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	if (jump >= size)
	{
		jump = size - 1;
	}

	while (i < jump && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
