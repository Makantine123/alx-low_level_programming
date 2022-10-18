#include "main.h"
/**
 * print_alphabet_x10 - Prints letter in small case 10x and then new line
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
