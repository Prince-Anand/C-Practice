#include <stdio.h>
int main()
{
    int cp, sp;
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter Selling price: ");
    scanf("%d", &sp);
    if (cp < sp)
    {
        printf("Profit.");
    }
    if (cp > sp) // better use else-if but not learnt yet in C
    {
        printf("Loss.");
    }
    if (cp == sp)
    {
        printf("No profit/loss");
    }
    return 0;
}