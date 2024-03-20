#include <stdio.h>
int main() {
    int x;
    printf("Number: ");
    scanf("%d",&x);
    int a = 1;
    for (int i = 2; i < x; i++)
    {
        if (x%i==0) {
            a=0;
            break;
        }
    }
    if (a==0) printf("Not a Prime Number");
    else if (x==1) printf("not a prime  as well as composite");
    else printf("Prime Number");
    
    return 0;
}