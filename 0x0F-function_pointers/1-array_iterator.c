#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as parameter on each element
 * @:array: Array
 * @size: Size 
 * @action:Pointer to function
 * Return:Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
