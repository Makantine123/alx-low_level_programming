#include "main.h"
/**
 * print_last_digit - prints the last digit
 * Return: Returns the absolute value of a number
 * @i: Interger
 */
int print_last_digit(int i)
{
int j;

if (i < 0)
{
i = i * -1;
}
j = i % 10;
_putchar(j + '0');
return (j);
}
