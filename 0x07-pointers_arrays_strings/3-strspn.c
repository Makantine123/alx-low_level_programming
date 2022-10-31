#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Initial String
 * @accept:Bytes
 * Return: Integer bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, foundPref, lengP;

	foundPref = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				foundPref = 1;
				break;
			}
		}
		if (foundPref == 1)
		{
			break;
		}
		lengP = i + 1;
	}
	return (lengP);
}
