#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -  Adds 2 positive numbers
 * @argc: Number of arguments
 * @argv: Array of cmd arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	unsigned int i, result;

	result = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else if (argc > 2)
	{
		for (i = 1; argv[i] != NULL; i++)
		{
			if (atoi(argv[i]) >= 0 && atoi(argv[i]) <= 10000)
			{
				result = result + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
