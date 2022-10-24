#include "main.h"
/**
 * print_rev - Print a string in reverse
 * @s: is a string
 * Return: Always void
 */
void print_rev(char *s)
{
	int i;
	int j;
	int count;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i;
	while (s[j] != '\0')
	{
		_putchar(s[j]);
		j--
	}
	_putchar('\n');
}
