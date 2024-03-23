#include <stdio.h>
int main() {
    for (int i =1 ; i<=100;i++){
        if (i%2!=0){
            continue;//skips the loop if the no. is not divisible by 2 / odd no.
        }
        printf("%d ",i);
    }
    return 0;
}