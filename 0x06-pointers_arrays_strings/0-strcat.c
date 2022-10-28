#include "main.h"
/**
 * _strcat - Concatenates twon strings
 * @dest: First string
 * @src: Second string
 * Return: Returns a pointer resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	int i = 0;
	int j = 0;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
