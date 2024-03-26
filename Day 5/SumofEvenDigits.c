#include <stdio.h>

int main() {
    int x;
    printf("Enter a Number: ");
    scanf("%d",&x);
    int count =0,esum =0;
    while (x>0){
        count=x%10;
        x/=10;
        if (count%2==0){
            esum+=count;
        }
    }
    printf("Sum of its even digits: %d",esum);
    return 0;
}