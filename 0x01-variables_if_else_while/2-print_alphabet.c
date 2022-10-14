#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		alphabet = c;
		putchar("%d\n",alphabet);
	}
	return (0);
}
