#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 * Return: Always void
 */
void rev_string(char *s)
{
	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	j = i - 1;
	while (s[j] != '\0')
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
