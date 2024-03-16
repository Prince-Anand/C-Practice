#include <stdio.h>

int main() {
    int x,y,z,w;
    printf("Enter Number1: ");
    scanf("%d",&x);
    printf("Enter Number2: ");
    scanf("%d",&y);
    printf("Enter Number3: ");
    scanf("%d",&z);
    printf("Enter Number4: ");
    scanf("%d",&w);
    if (x>y && x>z && x>w){ 
        printf("%d is Greatest.",x);
    }
    else if (y>x && y>z && y>w){
        printf("%d is Greatest.",y);
    }
    else if (z>x && z>y && z>w){
        printf("%d is Greatest.",y);
    }
    else{
        printf("%d is Greatest.",w);
    }
    return 0;
}