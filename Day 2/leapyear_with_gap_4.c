#include <stdio.h>

int main()
{
    int x;
    printf("Enter a Year: ");
    scanf("%d", &x);
    if (x % 4 == 0) // if (condition) {} else{}
    {
        if (x % 100 == 0) // if divisible by 4 then check by 100.
        {
            if (x % 400 == 0) // if divisible by 4,100 and also 400 -> Leap
            {
                printf("%d is a Leap year.", x);
            }
            else // if divisible by 4, 100 but not 400 -> not a leap year.
            {
                printf("%d is not a leap year.", x);
            }
        }
        else // if not divisible by 100 but divisible by 4 then, leap year.
        {
            printf("%d is a Leap year.", x);
        }
    }
    else // if not divisible by 4 itself -> already not a leap year, no need to check by 100 & 400.
    {
        printf("%d is not a leap year.", x);
    }
    return 0;
}

/*
LEAP YEAR
-divisible by 4
-divisible by 100 ->not leap, except 400 div
-divisible by 400
(4 - 100) + 400
*/