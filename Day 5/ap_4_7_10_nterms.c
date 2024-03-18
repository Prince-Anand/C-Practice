#include <stdio.h>
//Print the AP - 4,7,10,13.. upto ‘n’ terms
int main() {
    int x;
    printf("No. of terms: ");
    scanf("%d",&x);
    for (int i = 4; i <= 3*x+1; i=i+3)// 3 is the cd of AP and loop until last term and loop runs x times
    {
        printf("%d",i);
        if (i<3*x+1) printf(",");// doesnt print ',' when i==3*x+1
    }
    
    return 0;
}
//ques... how to know how many times a loop runs?