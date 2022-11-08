#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Function returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: String
 * Return: NULL if string is null
 */
char *str_concat(char *s1, char *s2)
{
	char *dup;
	unsigned int k = 0;
	unsigned int i = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	dup = malloc(sizeof(char) * ((len1) + (len2)));
	if (dup == NULL)
	{
		return (NULL);
	}
	while ((dup[i] = s1[i]) != '\0')
	{
		i++;
	}
	while ((dup[i] = s2[k]) != '\0')
	{
		i++;
		k++;
	}
	*(dup + i) = '\0';
	return (dup);
}
