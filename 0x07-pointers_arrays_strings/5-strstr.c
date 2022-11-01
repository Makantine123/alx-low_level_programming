#include "main.h"
#include <stdbool.h>
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
	int i, j;
	bool found;

	found = false;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[j + i])
			{
				break;
			}
		}
		if (!needle[j])
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
