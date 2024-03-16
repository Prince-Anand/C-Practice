#include <stdio.h>

int main() {
    int l,b,p,a;
    printf("Enter Length : ");
    scanf("%d",&l);
    printf("Enter Breadth : ");
    scanf("%d",&b);
    p = 2 * (l+b);
    a = l*b;
    if (p>a){
        printf("Perimeter of Rectangle with sides %d and %d is greater than area.",l,b);
}
    else{
        printf("Area of Rectangle with sides %d and %d is greater than perimeter.",l,b);
    }
    return 0;
}