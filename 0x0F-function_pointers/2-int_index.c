#include "function_pointers.h"
/**
 * int_index - Function searches for an interger
 * @array: Array
 * @size: Number of elements
 * @cmp: function pointer
 * Return: Always index of match, -1 if no matches or size < 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
