#include <stdio.h>

int main() {
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    if (x%33==0){ 
        if (x%5==0) printf("Divisible by 3 and 5 both.");
    }
    else{
        printf("Not divisible by 3 and 5 both.");
    }
    return 0;
}