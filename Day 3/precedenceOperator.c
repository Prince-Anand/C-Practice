#include <stdio.h>

int main() {
    printf("%d",2*3/4+4/4+8-2+5/8);
    return 0;
}

/*
BO(DM)(AS)
% -> modulo operator -> Highest precedence
if same preced.. like * and / then left to right approach

''TRICK''
Make combination of expr. acc to + and -
e.g. (2*3/4)+(4/4)+8-2+(5/8)
*/