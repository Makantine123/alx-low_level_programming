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
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	s = (char *) malloc(sizeof(char) * size);
	
	if (s == NULL)
		return (0);

	while (i < size)
	{
		*(s + i) = c;
		i++;
	}

	*(s + i) = '\0';

	return (s);
}
