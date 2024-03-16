/*
Variable name rules 
1. only start with a,b,c... or _
2.do not start with no.
3.can not contain special characters like @,!#,$,etc except '_'
4.can not be name of keywords
5.can not have spaces between words
*/

#include <stdio.h>

int main() {
    int x;
    // int double; <- wrong bcz double can't be a name of a variable
    int _hello;
    // int 122hello; <- wrong cz can't start with no.
    float Hello_Fellas;
    // float Hello Fellas; <- wrong as space btw words
    return 0;
}