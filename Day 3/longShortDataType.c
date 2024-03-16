#include <stdio.h>

int main() {
    short a = 32767;// max input of short
    printf("%d",a);
    return 0;
}

/*
1 byte = 8 bits
n bits = 2^n numbers
short -> 2 bytes = 16 bits -> 2^16 numbers = 65536 -> -32768 to -32767 <- -2^15 to 2^15-1
int   -> 4 bytes = 32 bits -> 2^32 numbers         -> -2^31 to 2^31 - 1
char  -> 1 byte = 8 bits   -> 2^8 = 256 numbers
long long -> 8 byte -> -2^63 to 2^63-1
*/