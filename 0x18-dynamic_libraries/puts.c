#include "main.h"
/**
 * _puts - Function prints a string
 * @str: String to print
 * Return: Always void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
