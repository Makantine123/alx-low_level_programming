#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char base16;

	for (base16 = 0; base16 < 10; base16++)
	{
		putchar('0' + base16);
	}
	for (base16 = 'a'; base16 <= 'f'; base16++)
	{
		putchar(base16);
	}
	putchar('\n');
	return (0);
}
