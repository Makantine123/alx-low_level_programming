#include <stdio.h>
/**
 * main - print program name
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
