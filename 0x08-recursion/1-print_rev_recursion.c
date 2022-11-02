#include "main.h"
/**
 * _print_rev_recursion - Function prints a string in reverse
 * @s: String
 * Return: Void, prints string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	if (!s)
	{
	_putchar('\n');
	}
}
