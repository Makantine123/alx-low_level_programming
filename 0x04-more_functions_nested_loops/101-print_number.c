#include "main.h"
/**
 * print_number - Prints integer
 * Return: Always 0
 * @n: Integer
 */
void print_number(int n)
{
	int i, j, k, m;

	unsigned int j;

	if (n < 0)
	{
		j = -n;
		_putchar('-');
	}
	else
	{
		j = n;
	}
	if (j / 10)
	{
		print_number(j / 10);
	}
	_putchar((j % 10) + '0');
}
