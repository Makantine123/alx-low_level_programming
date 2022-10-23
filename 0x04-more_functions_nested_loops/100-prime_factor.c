#include <stdio.h>
/**
 * main - Finds the largest prime factor of 612852475143
 * Return: Always 0
 */
void main(void)
{
	int lrgPf;
	int i;

	for (i = 2; i < 1231952 / 2; i++)
	{
		if (1231952 % i == 0)
		{
			lrgPf = i;
		}
	}
	printf("%d\n", lrgPf);
}
