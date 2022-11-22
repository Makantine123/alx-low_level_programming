#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Unsigned int
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == 0)
	{
		exit(98);
	}
	else
	{
		return (s);
	}
}
