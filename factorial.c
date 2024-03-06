#include <stdio.h>

int main()
{
    int a, b;
    b = 1;

    scanf("%d", &a);
    int temp = a;
    for (a; a > 1; a--)
    {
        b = b * a;
    }
    printf("Factorial of %d is %d", a + 1, b);
    return 0;
}