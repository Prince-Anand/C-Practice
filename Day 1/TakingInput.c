#include <stdio.h>

int main()
{
    int x;                      // declaring variable x
    printf("Enter a number: "); // printf funtion to print a Sentence
    scanf("%d", &x);            // same line with printf.... scanf() is a function used to take input in C where & is used before x to make it clear to compiler that we are assigning value to x
    printf("The Given input by user is %d", x);
    return 0;
}