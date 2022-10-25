#include "stdio.h"
/**
 * main - Prints the sum of all even held numbers in fibonacci series
 * Return: Always 0 (Success)
 */
int main(void)
{
        unsigned long numTotal;
        int firstN;
        int SecondN;
        int i;

        numTotal = 0;
        firstN = 1;
        SecondN = 2;
        i = 3;

        printf("%d, ", firstN);
        printf("%d ,", SecondN);

        while (i <= 98)
        {
                numTotal = firstN + SecondN;
                printf("%lu", numTotal);
                if (i < 98)
                {
                        printf(", ");
                }
                firstN = SecondN;
                SecondN = i;
                i++;
        }
        return (0);
}
