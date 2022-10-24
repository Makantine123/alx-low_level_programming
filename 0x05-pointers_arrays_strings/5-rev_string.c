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
	char str[700];

	i = 0;
	j = 0;

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i -1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
