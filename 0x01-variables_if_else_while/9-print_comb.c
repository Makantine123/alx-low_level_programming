#include <stdio.h>
/**
 * main - Entry point
 *
 * Retrun: Always 0 (Succes)
 */
int main(void)
{
	int sngleD;

	for (sngleD = 0; sngleD <= 9; sngleD++)
	{
		putchar('0' + sngleD);
		if (sngleD < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
