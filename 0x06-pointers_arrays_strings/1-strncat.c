#include "main.h"

/**
 *_strncat - concatinates two strings
 *@dest:destination pointer
 *@src:pointer to a string
 *@n:amount tot be concatenated
 *Return: concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	/* Below code block finds the length of *dest & *src  and
	 * Compares it to n
	 */

	int lenDest, lenSrc, i, j, k;
	
	for (i = 0; dest[i] != '\0'; i++)

	k =0;

	while (src[k] != '\0' && n > 0)
	{
		dest[i] = src[k];
		n--;
		k++;
	}
	if (n > 0)
	{
		return (dest);
	}
	else
	{
		dest[k] = '\0';
		return (dest);
	}
}
