#include "main.h"
/**
 * _abs - Checks if n is greater than 0, equal to zero, less than zero
 * Return: Returns the absolute value of a number
 * @i: Interger
 */
int _abs(int i)
{
if (i < 0)
{
return (_putchar(-i));
}
else
{
return (_putchar(i));
}
}
