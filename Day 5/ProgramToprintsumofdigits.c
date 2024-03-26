#include <stdio.h>

int main() {
    int x;
    printf("The Number: ");
    scanf("%d",&x);
    int count=0;
    int temp;
    while (x>0){
        count += x%10;
        x/=10;
    }
    printf("Sum. of Digits : %d",count);
    return 0;
    return 0;
}