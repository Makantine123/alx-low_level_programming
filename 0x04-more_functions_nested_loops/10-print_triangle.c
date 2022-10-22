#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: Size of triangle
 * Return: Size is zero
 */
void print_traingle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (size - i <= j)
			{
				printf("#");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	return (0);
}
