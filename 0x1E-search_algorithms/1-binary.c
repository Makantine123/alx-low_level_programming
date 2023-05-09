#include "search_algos.h"
/**
 * binary_search - Function seaches for a value using Binary Search
 * @array: Pointer to array of elements
 * @size: Size of array
 * @value: Value to find
 * Return: -1 if function finds nothing or array is NULL, else return index
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	low = 0;
	high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
			{
				printf(", ");
			}
		}
		printf("\n");
		mid  = (low + high) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else
		{
			if (value < array[mid])
			{
				high = mid - 1;
			}
			else if (value > array[mid])
			{
				low = mid + 1;
			}
		}}
	return (-1);
}
