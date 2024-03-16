#include <stdio.h>

int main() {
    int x,y,z;
    printf("Enter Number1: ");
    scanf("%d",&x);
    printf("Enter Number2: ");
    scanf("%d",&y);
    printf("Enter Number3: ");
    scanf("%d",&z);
    if (x>y && x>z){ 
        printf("%d is Greatest.",x);
    }
    else if (y>x && y>z){
        printf("%d is Greatest.",y);
    }
    else{
        printf("%d is Greatest.",z);
    }
    return 0;
}