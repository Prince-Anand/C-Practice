#include <stdio.h>

int main() {
    char x = 'A'; // takes ASCII value as the value of container/variable
    char y[] = "This can take any no. of characters"; // used "" not '' for multiple characters
    printf("%c\n",x);// print the actual character of the x as %c is the format specifier of character data type
    printf("%d\n",x);// print the ASCII value of the x as %d -> int format specifier 
    printf("%s\n",y);// %s for multiple char
    return 0;
}
/*
char ---> ASCII value
A    ---> 65
Z    ---> 90
a    ---> 97
z    ---> 122
*/