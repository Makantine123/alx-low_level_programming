#include "main.h"

/**
 * _strncpy - string copy
 * @dest: first input character
 * @src: second input character
 * @n: number of bytes
 *
 * Description: the function copies a string
 * Return: returns destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, k, j;

	for (j = 0; dest[j] != '\0'; j++)

	for (i = 0; src[i] != '\0' && n > 0; i++, n--)
	{
		dest[i] = src[i];
		k = i;
	}
	while (k < j)
	{
		dest[k + 1] = '\0';
		k++;
	}
	return (dest);
}
