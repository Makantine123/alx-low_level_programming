#include "main.h"
/**
 * main - Prints all the arguments it recieves
 * @argc: Number of arguments
 * @argv: Array of cmd arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
