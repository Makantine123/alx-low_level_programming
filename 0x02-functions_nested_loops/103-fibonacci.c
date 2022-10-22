#include "stdio.h"
/**
 * main - Prints the sum of all even held numbers in fibonacci series
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
evenSum = 0;
for (i = 0; i < 50; i++)
{
_nxtNum = _1stNum + _2ndNum;
_1stNum = _2ndNum;
_2ndNum = _nxtNum;
if (_nxtNum % 2 == 0 && _nxtNum < 4000000)
{
evenSum += _nxtNum;
}
}
printf("%lu", evenSum);
printf("\n");
return (0);
}
