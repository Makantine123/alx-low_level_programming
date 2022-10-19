#include "stdio.h"
/**
 * main - Prints the sum of all even held numbers in fibonacci series whose values do not exceed 4 000 000
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long i;
unsigned long evenSum;
unsigned long _1stNum;
unsigned long _2ndNum;
unsigned long _nxtNum;
_1stNum = 0;
_2ndNum = 1;
while (i < 4000000)
{
_nxtNum = _1stNum + _2ndNum;
_1stNum = _2ndNum;
_2ndNum = _nxtNum;
if (_nxtNum % 2 == 0)
{
evenSum += _nxtNum;
}
}
printf("%ld", evenSum);
printf("\n");
return (0);
}
