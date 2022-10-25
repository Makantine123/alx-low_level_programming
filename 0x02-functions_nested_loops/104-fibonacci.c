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
        unsigned long N;
        unsigned long j;

        numTotal = 0;
        firstN = 1;
        SecondN = 2;
        i = 3;

        printf("%d, ", firstN);
        printf("%d ,", SecondN);

        while (i <= 98)
        {
                numTotal = firstN + SecondN;
                N = numTotal;
                j = N;
                while (N != 0)
                {
                        j = N % 10;
                        printf("%lu", j);
                        N = (N / 10) - (N % 10);
                }

                if (i < 98)
                {
                        printf(", ");
                }
                firstN = SecondN;
                SecondN = numTotal;
                i++;
        }
        return (0);
}
