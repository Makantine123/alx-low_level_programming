#include <stdio.h>
/**
 * main - print program name
 * @argc: Number of arguments in cmd line
 * @argv: Array of arguments in cmd line of size argc
 * Return: Void
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	return (0);
}
