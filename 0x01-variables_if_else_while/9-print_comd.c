#include <stdio.h>
/**
 * main - Entry point
 *
 * Retrun: Always 0 (Succes)
 */
int main(void)
{
	char sngleD

	for (sngleD = 0; sngleD <= 9; sngleD++)
	{
		putchar('0' + sngleD);
		putchar(', ');
	}
	putchar('\n');
	return (0);
}
