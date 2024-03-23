#include <stdio.h>

int main() {
    for (int i =1 ; i<=100;i++){//loop starts with 1 and goes till 100 with increase in value of i by 1 each time
        if (i%2==0){
            continue;//skips the loop if the no. is divisible by 2 / even no.
        }
        printf("%d ",i);
    }
    return 0;
}