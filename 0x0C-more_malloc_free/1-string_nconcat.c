#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, k, j, l;

	for (i = 0; s2[i] != '\0' && i < n; i++)
	for (k = 0; s1[k] != '\0'; k++)
	
	j = i + k;
	str = malloc(j + 1);
	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (l = 0;s2[l] != '\0' && i < j + 2; l++, i++)
	{
		str[i] = s2[l];
	}
	return (str);
}
