// WAP to find out if number is divisible by 5 or not
#include <stdio.h>
int main()
{
    int Dividend, Divisor;
    printf("Enter a Number: ");
    scanf("%d", &Dividend);
    printf("Enter a Number(divisor) to check divisible by or not: ");
    scanf("%d", &Divisor);
    if (Dividend % Divisor == 0) // if (condition) {} else{}
    {
        printf("%d is divisible by %d.", Dividend, Divisor); // Runs if the number is divisible
    }
    else
    {
        printf("%d is not divisible by %d.", Dividend, Divisor); // if the no. is not divisible then else part runs
    }
    return 0;
}