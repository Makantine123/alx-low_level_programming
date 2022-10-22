#include "main.h"
/**
 * print_line - Drawas straight line in terminal
 * Return: Always zero
 * @n: Number of times _ should print
 */
void print_line(int n)
{
	int t;

	if (n > 0)
	{
		for (t = 0; t <= n; t++)
		{
			_putchar('_');
		}
	}
	else
	{
		_puchar('\n');
	}
}
