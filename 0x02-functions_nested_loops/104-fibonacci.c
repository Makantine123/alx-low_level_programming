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
        int k;
        unsigned long N;
        unsigned long j;
        int arr[100];

        numTotal = 0;
        firstN = 1;
        SecondN = 2;
        i = 3;
        k = 0;

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
                        arr[k] = j;
                        N = N / 10;
                        k++;
                }

                k = k -1;
                while(k--)
                {
                        printf("%d", arr[k]);
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
