#include "main.h"
/**
 * *_strcpy - Copy string pointed by src, include \0 to pointer dest
 * Return: the pointer dest
 * @dest: Pointer to copy to
 * @src: Pointer of string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] <= '\0')
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
