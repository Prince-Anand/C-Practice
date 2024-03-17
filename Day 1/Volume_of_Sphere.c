#include <stdio.h>

int main()
{
    int radius;
    scanf("%d",&radius); //refer to day 2 for scanf() understanding
    float pi = 3.141593;
    printf("Volume of Sphere = %f", (4.0/3)*pi*radius*radius*radius);//4/3 =1 *mistake alert*
    return 0;
}