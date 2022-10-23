#include <stdio.h>

int main()
{
    int i, j, num, isPrime, lrg;

    /* Input a number from user */
    num = 1231952;

    /* Find all Prime factors */
    for(i=2; i<=num; i++)
    {
        /* Check 'i' for factor of num */
        if(num%i==0)
        {
            /* Check 'i' for Prime */
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }

            /* If 'i' is Prime number and factor of num */
            if(isPrime==1)
            {
                lrg = i;
            }
        }
    }
	printf("%d\n",lrg);
    return (0);
}