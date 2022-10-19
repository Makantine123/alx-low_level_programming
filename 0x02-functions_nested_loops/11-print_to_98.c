#include "main.h"
/**
 * _isalpha - Checks if c is a alphabet character
 * Return: Returns 1 if alphabet or 0 is not
 * @c: Is the character to test
 */
void print_to_98(int n)
{
int i;
i = n;
if (n < 98)
{
for (i = n; i <= 98;i++)
{
if (i != 98)
{
_putchar(i + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar(i);
}
}

}
else if (n > 98)
{
for (i =n; i >= 98; i--)
{
if (i != 98)
{
_putchar(i + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar(i);
}
}
}
else
{
_putchar(i + '0');
}
}
