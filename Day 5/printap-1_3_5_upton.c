#include <stdio.h>
//1,3,5,7,9,....
int main() {
    int x;
    printf("No. of terms: ");
    scanf("%d",&x);
    for (int i = 1; i <= x; i=i+2)
    {
        printf("%d",i);
        if (i<x) printf(",");// doesnt print ',' when i==x
    }
    
    return 0;
}