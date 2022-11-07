#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function creates an array of chars,
 * and initializes it with a specific char
 * @size: Size of array
 * @c: Name of array
 * Return: Pointer to array or NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
