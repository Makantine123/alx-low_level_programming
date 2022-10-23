#include <stdio.h>
/**
 * main - Finds the largest prime factor of 612852475143
 * Return: Always 0
 */
int main(void)
{
	int lrgPf;
	int i;
	int j;

	for (i = 2; i < 1231952 / 2; i++)
	{
		if (1231952 % i == 0)
		{
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j != 0)
				{
					lrgPf = i;
				}
			}
		}
	}
	printf("%d\n", lrgPf);
	return (0);
}
