#include "main.h"
/**
 * main - Prints the number of arguments in cmd
 * @argc: Number of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
