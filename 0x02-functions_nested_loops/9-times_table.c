#include "main.h"
/**
 * times_table - Prints letter in small case 10x and then new line
 * Return: Prints the time table
 */
void times_table(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
    for (j = 0; j < 10; j++)
    {
        _putchar(i*j);
        _putchar(',');
        if (j != 9)
        {
        _putchar(' ');
        }
    }
    _putchar('\n');
}
}
