#include "main.h"
/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n:  Number
 * @index: Is the index starting from 0 of the bit
 * Return: Value of the bit or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
	{
		return (-1);
	}

	bit_val = (n >> index) & 1;

	return (bit_val);
}
