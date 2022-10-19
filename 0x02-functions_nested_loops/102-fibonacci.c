#include "stdio.h"
/**
 * main - Prints the sum of all the multiples of 3 & 5 below 1024(excluded)
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    int _1stNum;
    int _2ndNum;
    int _nxtNum;

    _1stNum = 0;
    _2ndNum = 1;

    for (i = 1; i <= 50; i++)
    {
        _nxtNum = _1stNum + _2ndNum;
        _1stNum = _2ndNum;
        _2ndNum = _nxtNum;
        printf("%d", _nxtNum);
        if (i < 50)
        {
        printf(", ");
        }
    }
    return (0);
}
