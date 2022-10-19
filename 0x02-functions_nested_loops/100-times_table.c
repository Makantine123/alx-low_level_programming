#include "main.h"
/**
 * print_alphabet - Prints letter in small case and then new line
 * Return: Always 0 (Success)
 * @n: Integer to pass to create times table
 */
void print_times_table(int n)
{
int i;
int j;
int res;
if (n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
res = i * j;
if (j != 0 && res < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
if (res >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
_putchar((res % 100) + '0');
}
if (res >= 10 && res < 100)
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else if (res < 10 && j != 0)
{
_putchar(' ');
_putchar((res % 10) + '0');
}
else if (res == 0)
{
_putchar((res % 10) + '0');
}
}
_putchar('\n');
}
}
}
