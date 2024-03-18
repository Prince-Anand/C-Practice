#include <stdio.h>

int main() {
    int n;
    printf("Table of Number: ");
    scanf("%d",&n);
    for (int i=1;i<=10;i++){// loop runs 10 times with value of i increasing by 1 each time
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
/*
loop steps:
1)initializes i value
2)checks condition
3)goes to content of loop
4)increament part / value updation
5)goes back to step 1
*/