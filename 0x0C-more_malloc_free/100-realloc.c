#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memcpy - Copies memory to pointer
 * @dest: destination
 * @src: source
 * @n: size of memory to copy
 * Return: Returns memory copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _realloc - Function reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Is the size in bytes of the allocated space for the ptr
 * @new_size: Is the new size in bytes of the new memory block
 * Return: Pointer to new/reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (old_size == new_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == 0)
		{
			return (0);
		}
		free(ptr);
		return (ptr2);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == 0)
	{
		return (0);
	}
	_memcpy(ptr2, ptr, new_size);
	free(ptr);
	return (ptr2);
}
