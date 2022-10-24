#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: Character/string
 */
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	_putchar(i + '0');
	_putchar("\n");
}
