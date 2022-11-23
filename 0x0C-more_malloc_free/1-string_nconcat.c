#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * Description: The prohram concatenates n bytes of s2 to s1
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes of s2
 * Return: Null if malloc fails,
 * else pointer to address with concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int L1, L2, L3, i, k;

	L1 = 0, L2 = 0, i = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[L1])
		L1++;
	while (s2[L2])
		L2++;
	if (n < L2)
		L2 = n;
	L3 = L1 + L2;
	str = malloc(L3 + 1);
	if (str == 0)
	{
		return (NULL);
	}
	while (i < L1)
	{
		str[i] = s1[i];
		i++;
	}
	while (k < n)
	{
		str[i] = s2[k];
		i++;
		k++;
	}
	str[i] = '\0';

	return (str);
}
