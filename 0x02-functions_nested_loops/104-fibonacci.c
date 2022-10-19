#include "stdio.h"
/**
 * main - Prints the sum of all even held numbers in fibonacci series
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned int i;
unsigned int _1stNum;
unsigned int _2ndNum;
unsigned int _nxtNum;
_1stNum = 0;
_2ndNum = 1;
for (i = 0; i < 98; i++)
{
_nxtNum = _1stNum + _2ndNum;
_1stNum = _2ndNum;
_2ndNum = _nxtNum;
printf("%u", _nxtNum);
if (i < 96)
{
    printf("%u", _nxtNum);
}
}
printf("\n");
return (0);
}
