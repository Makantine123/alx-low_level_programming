#include "main.h"
/**
 * print_diagonal - Draws a line in terminal
 * Return: Lines
 * @n: Number of '_' to print
 */
void print_diagonal(int n)
{
	t = 0;
	for (t =0; t < n; t++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
