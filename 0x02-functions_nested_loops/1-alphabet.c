#include "main.h"
/**
 * main - Prints letter in small case and then new line
 * Refers to main header for function prototype
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