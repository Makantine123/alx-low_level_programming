#include "main.h"
/**
 * _isdigit - Returns 1 if c is digit and 0 otherwise
 * Return: Always 1 or 0
 * @c: Is a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
