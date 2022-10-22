#include "stdio.h"
/**
 * main - Prints the sum of all the multiples of 3 & 5 below 1024(excluded)
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int res;
res = 0;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
res += i;
}
}
printf("%d\n", res);
return (0);
}
