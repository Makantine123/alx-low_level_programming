#include "main.h"
/**
 * print_last_digit - prints the last digit
 * Return: Returns the absolute value of a number
 * @i: Interger
 */
int print_last_digit(int i)
{
if (i < 0)
{
i = i * (-1);
}
_putchar((i % 10) + '0');
return (i % 10);
}
