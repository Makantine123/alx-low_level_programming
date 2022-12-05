#include "main.h"
/**
 * flip_bits - Function returns the number of bits you would need to flip,
 * to get from one number to another
 * @n: Number 1
 * @m: Number 2
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int nm = n ^ m;

	while (nm > 0)
	{
		count++;
		nm = nm & (nm - 1);
	}

	return (count);
}
