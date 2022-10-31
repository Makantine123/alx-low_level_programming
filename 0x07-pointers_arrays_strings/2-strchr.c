#include "main.h"

/**
 * _strchr - Locates a character, returns + pointer
 * @s: Pointer string
 * @c: Character c to search for
 *Return: Pointer or Null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
