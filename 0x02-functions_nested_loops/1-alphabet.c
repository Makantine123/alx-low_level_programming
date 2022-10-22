#include "main.h"
/**
 * print_alphabet - Prints letter in small case and then new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
