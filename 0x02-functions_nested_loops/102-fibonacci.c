#include "stdio.h"
/**
 * main - Prints the sum of all the multiples of 3 & 5 below 1024(excluded)
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long _1stNum;
unsigned long _2ndNum;
unsigned long _nxtNum;
_1stNum = 0;
_2ndNum = 1;
for (i = 1; i <= 50; i++)
{
_nxtNum = _1stNum + _2ndNum;
_1stNum = _2ndNum;
_2ndNum = _nxtNum;
printf("%ld", _nxtNum);
if (i < 50)
{
printf(", ");
}
}
printf("\n");
return (0);
}
