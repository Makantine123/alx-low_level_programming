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
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
