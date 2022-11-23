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
	unsigned int L1, L2, L3, i, k;

	L1 = 0, L2 = 0;

	while (s1[L1])
	{
		L1++;
	}
	while (s2[L2])
	{
		L2++;
	}

	if (n < L2 + 1)
	{
		L2 = n;
	}

	L3 = L1 + L2 + 2;
	str = malloc(L3 + 1);
	if (str == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i <= L1)
	{
		str[i] = s1[i];
		i++;
	}
	k = 0;
	while ( i < L3)
	{
		str[i] = s2[k];
		i++;
		k++;
	}
	str[i] = '\0';

	return (str);
}
