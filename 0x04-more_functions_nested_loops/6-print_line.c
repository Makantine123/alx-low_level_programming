#include "main.h"
/**
 * print_line - Drawas straight line in terminal
 * Return: Always zero
 * @n: Number of times _ should print
 */
void print_line(int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		_putchar('_');
	}
	_putchar('\n');

}
