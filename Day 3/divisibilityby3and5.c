#include <stdio.h>

int main() {
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    if ((x%5==0) && (x%3==0)){ // == checks if both equal or not, = is assignment operator which is different from ==
        printf("Divisible by 3 & 5.\n");
    }
    else{
        printf("Not divisible by both 3 and 5 together.");
    }
    return 0;
}