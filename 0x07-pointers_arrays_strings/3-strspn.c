#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Initial String
 * @accept:Bytes
 * Return: Integer bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, founPref;

	foundPref = 0;

	for (i = 0; *(s + i) >= '\0'; i++)
	{
		for (j = 0; *(accept + 0) >= '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				foundPref = 1;
				if (foundPref == 1)
				{
					break;
				}
			}
		}
		if (foundPref == 1)
		{
			break;
		}
	}
	return (i);
}
