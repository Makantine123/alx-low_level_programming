#include "main.h"
/**
 * puts_half - Print half the string
 * @str: String to be processed
 * Return: Always void
 */
void puts_half(char *str)
{
	int i;
	int j;
	int count;

	i = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}
	count = i;
	for (j = count / 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
