#include <stdio.h>

int main()
{
    int x;
    printf("Enter a Number: ");
    scanf("%d", &x);
    if (x % 2 == 0) // if (condition) {} else{}
    {
        printf("%d is an Even Number.", x); // Runs if x/2 gives 0 remainder and condition of if part is true
    }
    else
    {
        printf("%d is an Odd Number.", x); // if condition of if is false then else part runs
    }
    return 0;
}