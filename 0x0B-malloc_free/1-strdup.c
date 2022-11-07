#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Function returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: String
 * Return: NULL if string is null
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	while ((dup[i] = str[i]) != '\0')
	{
		i++;
	}

	return (dup);
}
