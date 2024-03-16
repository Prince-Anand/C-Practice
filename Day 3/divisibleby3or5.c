#include <stdio.h>

int main() {
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    if ((x%5==0) || (x%3==0)){ // == checks if both equal or not, = is assignment operator which is different from == [|| is or, atleast one is true then true]
        printf("Divisible by either 3 or 5.\n");
    }
    else{
        printf("Not divisible by neither 3 nor 5.");
    }
    return 0;
}