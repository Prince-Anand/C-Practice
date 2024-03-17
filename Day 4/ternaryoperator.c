#include <stdio.h>

int main() {
    // exp 1 ? exp 2 : exp3 -> SYNTAX
    //even odd number
    int x;
    printf("Number: ");
    scanf("%d",&x);
    (x%2 == 0) ? printf("Even Number!") :printf("Odd Number!");
    return 0;
}