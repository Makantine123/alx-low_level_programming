#include "main.h"
/**
 * times_table - Prints letter in small case 10x and then new line
 * Return: Prints the time table
 */
void times_table(void)
{
int i;
int j;
int res;
for (i = 0; i < 10; i++)
{
    for (j = 0; j < 10; j++)
    {
        res = i*j;

        if (res == 0)
        {
            _putchar((res % 10) + '0');
        }
        if (res > 0 && res < 10)
        {
            _putchar((res % 10) + '0');
        }
        if (res >= 10)
        {
            _putchar((res / 10) + '0');
        }
        _putchar(',');
        _putchar(' ');
    }
    _putchar('\n');
}
}
