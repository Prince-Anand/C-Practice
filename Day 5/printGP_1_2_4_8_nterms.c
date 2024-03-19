#include <stdio.h>

int main() {
    int x;
    printf("No. of terms: ");
    scanf("%d",&x);
    int a =1;
    for (int i = 1; i <= x; i++)
    {
        printf("%d",a);
        a*=2;
        if (i<x) printf(",");// doesnt print ',' when i==x
    }
    return 0;
}