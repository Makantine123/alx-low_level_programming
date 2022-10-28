#include "main.h"
/**
 * _strcat - Concatenates twon strings
 * @dest: First string
 * @src: Second string
 * Return: Returns a pointer resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char i, j;

	for (i = 0; dest[i] != '\0'; ++i)

	for (j = 0; src[j] != '\0'; ++i, ++i)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
