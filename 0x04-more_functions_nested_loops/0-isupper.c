#include "main.h"
/**
 * _isupper - Checks if letter c is uppercase
 * Return: Always 1 if uppercase and 0 if otherwise
 * @c:Is a character to be checked
 */
int _isupper(int c)
{
	if (c>= 65 && c<= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
