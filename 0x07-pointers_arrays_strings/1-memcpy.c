#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @src: Source memory area
 * @dest: Destination memory area
 * @n: Number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	/* unsigned int j; */

	for (i = 0; i < n && *(dest + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
