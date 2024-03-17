#include <stdio.h>

int main() {
    int x,y,z;
    printf("Enter Number1: ");
    scanf("%d",&x);
    printf("Enter Number2: ");
    scanf("%d",&y);
    printf("Enter Number3: ");
    scanf("%d",&z);
    if (x>y){// y not greatest
        if (x>z) printf("%d is Greatest.",x); 
        else printf("%d is Greatest.",z);
    }
    else{ // y>x -> x not greatest
        if (y>z) printf("%d is Greatest.",y);
        else printf("%d is Greatest.",z);
    }
    return 0;
}