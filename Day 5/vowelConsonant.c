#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') printf("Vowel");
    else if (c=='A' || c=='E' || c=='I' || c=='O' || c=='U') printf("Vowel");
    else printf("Consonant");
    return 0;
}