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

	int i, j, k;

	k = n;

	for (i = 0; dest[i] != '\0'; ++i)
	{
	}

	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		if (n > 0)
		{
			dest[i] = src[j];
			n--;
		}
		if (n <= 0)
		{
			break;
		}
	}
	if (k > 0)
	{
	dest[i] = '\0';
	}
	return (dest);
}
