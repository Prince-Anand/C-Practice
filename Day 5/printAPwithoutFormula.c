#include <stdio.h>
//Printing AP WITHOUT using MATHEMATICAL FORMULA
int main() {
    int x;
    printf("No. of terms: ");
    scanf("%d",&x);
    int a=4;//extra variable for general n times loop
    for (int i = 1; i <= x; i++)// 3 is the cd of AP and loop until last term and loop runs x times
    {
        printf("%d",a);
        a+=3;
        if (i<x) printf(",");// doesnt print ',' when i==x
    }
    
    return 0;
}