#include "main.h"
/**
 * print_binary - Function prints binary representation of number
 * @n: Number to be converted to binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int binaryNum[32];
	int i, k;

	i = 0;

	while (n > 0)
	{
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (k = i -1; k >= 0; k--)
	{
		_putchar(binaryNum[k] + '0');
	}
}
