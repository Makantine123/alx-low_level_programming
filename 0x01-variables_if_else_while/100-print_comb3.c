#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Num1;
	char Num2;
	char setf;

	for (Num1 = 0; Num1 < 10; Num1++)
	{
		for (Num2 = 0; Num2 <10; Num2++)
		{
			setf = Num1 + Num2;
			putchar(setf);
		}
	}
	return (0);
}
