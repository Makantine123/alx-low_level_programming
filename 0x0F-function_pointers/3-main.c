#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - Function that computes simple operations
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char opr;
	int num1, num2, res;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opr = *argv[2];
	if ((opr == '/' || opr == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	res = func(num1, num2);

	printf("%d\n", res);

	return (0);
}
