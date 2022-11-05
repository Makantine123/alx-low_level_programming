#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies 2 numbers
 * @argc: Number of arguments
 * @argv: Array of cmd arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
