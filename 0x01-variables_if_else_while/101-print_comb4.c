#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			for (num3 = 0; num3 < 10; num3++)
			{
				if (num1 < num2 && num2 < num3)
				{
					putchar('0' + num1);
					putchar('0' + num2);
					putchar('0' + num3);
					if (num1 == 7 && num2 == 8 && num3 == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
