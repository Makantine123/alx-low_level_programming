#include "main.h"

/**
 * _strstr - Function locates locates the first occurrence of
 * the substring needle in the string haystack
 * The terminating null bytes(\0) are not compared
 * @haystack: String haystack
 * @needle: String to find in haystack
 * Return: Pointer to the begining of located substring or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, found;

	found = 0;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				found = 1;
				break;
				
			}
		}
		if (found == 1)
		{
			continue;
		}
		found = 0;

	}
	if (found == 1)
	{
		return (&haystack[i+1]);
	}
	return (NULL);
}
