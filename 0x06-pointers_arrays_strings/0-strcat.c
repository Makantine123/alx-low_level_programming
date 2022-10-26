#include "main.h"
/**
 * _strcat - Concatenates twon strings
 * @dest: First string
 * @src: Second string
 * Return: Returns a pointer resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	dest = *dest + *src;
	return dest;
}
