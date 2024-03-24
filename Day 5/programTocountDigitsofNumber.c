#include <stdio.h>

int main() {
    int x;
    printf("The Number: ");
    scanf("%d",&x);
    int count=0;
    int temp;
    while (x>0){
        x/=10;//int divided by 10 gives ony greatest integer function or only integer part excluding decimal
        count+=1;// until x=0(e.g. 123 -> 12 -> 1 -> 0) the value of count increases by 1
    }
    printf("No. of Digits : %d",count);
    return 0;
}