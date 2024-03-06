#include <stdio.h>

int main()
{
    int a;
    int isPrime;
    for (int i = 2; i < 100; i++)
    {
        isPrime = 1;
        if (i % 1 == 0)
        {
            for (int n = 2; n < i; n++)
            {
                if (i % n == 0)
                {
                    isPrime = 0; // num is not prime
                    break;
                }
            }
        }
        if (isPrime)
        {
            printf("%d ", i);
        }
    }
    return 0;
}