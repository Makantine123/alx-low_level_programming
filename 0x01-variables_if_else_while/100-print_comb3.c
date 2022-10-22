#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int Num1;
	int Num2;

	for (Num1 = 0; Num1 < 10; Num1++)
	{
		for (Num2 = 0; Num2 < 10; Num2++)
		{
			if ((Num1 < Num2) && (Num1 != Num2))
			{
				putchar('0' + Num1);
				putchar('0' + Num2);
				if (Num1 == 8 && Num2 == 9)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		Num2 = 0;
	}
	putchar('\n');
	return (0);
}
