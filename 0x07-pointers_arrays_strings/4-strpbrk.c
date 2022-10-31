#include "main.h"

/**
 * _strpbrk - Searches a string (s) for any of a set of bytes
 * @s: String s
 * @accept: Bytes to find
 * Return: Pointer to byte in s that matches bytes in accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + i) == *(accept + k))
			{
				break;
			}
		}
		if (accept[k])
		{
			return (s + i);
		}
	}
	return (0);
}
