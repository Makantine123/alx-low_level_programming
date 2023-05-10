#include "search_algos.h"
/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The first index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1;
	int low, high, i;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < (int)size) ? bound : (int)size - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
