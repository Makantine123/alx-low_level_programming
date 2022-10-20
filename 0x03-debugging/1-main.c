#include <stdio.h>

/**
 * main - cause as infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
