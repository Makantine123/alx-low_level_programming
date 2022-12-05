#include "main.h"
/**
 * clear_bit - Function sets the value of bit to 0 at a given index
 * @n: Binary numbers
 * @index: bit index to change
 * Return: 1 if worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
        {
                return (-1);
        }

        *n = ((1UL << index) | *n);

        return (0);
}
