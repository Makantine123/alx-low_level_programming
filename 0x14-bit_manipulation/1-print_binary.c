#include "main.h"
/**
 * print_binary - Function prints binary representation of number
 * @n: Number to be converted to binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i, k;

	i = 0;

	if (n == 0)
	{
		_putchar('0');
	}

	for (i = 63; i >= 0; i--)
	{
		k = n >> i;

		if (k != '\0')
		{
		if (k & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		}
	}

}
