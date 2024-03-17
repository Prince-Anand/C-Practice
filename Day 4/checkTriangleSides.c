#include <stdio.h>

int main() {
    int x,y,z;
    printf("Enter Side1: ");
    scanf("%d",&x);
    printf("Enter Side2: ");
    scanf("%d",&y);
    printf("Enter Side3: ");
    scanf("%d",&z);
    if ((x+y) > z && (y+z) > x && (x+z)> y){ 
        printf("Sides of a Triangle");
    }
    else{
        printf("Not the Sides of a Triangle");
    }
    return 0;
}