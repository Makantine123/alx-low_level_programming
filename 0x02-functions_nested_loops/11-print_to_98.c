#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - Checks if c is a alphabet character
 * Return: Returns 1 if alphabet or 0 is not
 * @n: Is the integer to starting counting from to 98
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
{
printf("%d, ", n);
}
printf("98\n");
}
else if (n > 98)
{
for (n = n; n > 98; n--)
{
printf("%d, ", n);
}
printf("98\n");
}
else
{
printf("98\n");
}
}
