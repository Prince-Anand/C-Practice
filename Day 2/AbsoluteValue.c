// easy
#include <stdio.h>

int main()
{
    int x;
    printf("Number: ");
    scanf("%d", &x);
    if (x < 0)
    {
        printf("Absolute Value of Number: %d", -x); // or x*(-1)
    }
    else
    {
        printf("Absolute Value of Number: %d", x);
    }
    return 0;
}