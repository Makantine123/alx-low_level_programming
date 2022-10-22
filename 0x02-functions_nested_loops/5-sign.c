#include "main.h"
/**
 * print_sign - Checks if n is greater than 0, equal to zero, less than zero
 * Return: Returns  1, 0, -1 and prints +, 0, -
 * @n: Is a number to be tested
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
