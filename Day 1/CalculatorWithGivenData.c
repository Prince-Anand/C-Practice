#include <stdio.h>

int main()
{
    int x, y;
    x = 5;
    y = 2;
    printf("%d\n", x + y);
    printf("%d\n", x - y);
    printf("%d\n", x * y);
    printf("%d", x / y); // gives wrong input as division in float is different
    return 0;
}