#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @s: String
 * Return: String lenth int
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(s + 1);
		return (i);
	}
	else
	{
		return (0);
	}
}

