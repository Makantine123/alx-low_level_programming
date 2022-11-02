#include "main.h"

/**
 * _puts_recursion - The function prints a string follwed by \n
 * @s: String
 * Return: Returns nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
