#include <stdio.h>

int main() {
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    if ((x>99) && (x<1000)){// && -> and -> both true then true
        printf("Three Digit Number!");
    }
    else{
        printf("Not a Three Digit Number!");
    }
    return 0;
}