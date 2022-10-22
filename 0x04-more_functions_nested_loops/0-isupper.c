#include "main.h"
/**
 * _isupper - Checks if letter c is uppercase
 * Return: Always 1 if uppercase and 0 if otherwise
 * @c:Is a character to be checked
 */
int _isupper(int c)
{
	char uCase;

	for (uCase = 'A'; uCase <= 'Z'; uCase++)
	{
		if (c == uCase)
		{
			printif("%d: 1", uCase);
			return (1);
		}
	}
	printif("%d: 0", uCase);
	return (0);
}

