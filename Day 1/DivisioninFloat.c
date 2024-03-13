#include <stdio.h>
// VeryImportant - Generally errors in calculations happen here
int main()
{
    int x, y;
    x = 5;
    y = 2;
    printf("%d\n", x / y); // prints the quotient of 5/2 as int / int gives int as output
    float a, b;
    a = 5; // a = 5.000000 after decimal 6 digits
    b = 2;
    printf("%f\n", a / b); // prints the actual decimal output of 5/2 as float / float gives float = 2.5 as output
    printf("%f", 7.0 / 2); // print float output bcz float/int or int/float gives float output
    return 0;
}