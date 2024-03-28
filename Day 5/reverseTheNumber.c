#include <stdio.h>

int main() {
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    int count=0;
    while (x>0){
        count += x%10;
        x/=10;
        count*=10;
    }
    printf("Sum. of Digits : %d",count/10);
    return 0;
}