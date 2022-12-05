#include "main.h"
/**
 * set_bit - Function sets the value of a bit to 1 at a given index
 * @n; Binary number
 * @index: Index
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
        {
                return (-1);
        }

        *n = ((1UL << index) | *n);

        return (1);
}
