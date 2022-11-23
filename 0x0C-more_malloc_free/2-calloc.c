#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: Number of elements
 * @size: Size of bytes
 * Return: Ponter to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if ( nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		arr[i] = 0;
	}

	return (arr);
}
