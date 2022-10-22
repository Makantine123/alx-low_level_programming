#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9, does not print 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
