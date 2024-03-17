// Program to find if point lies on X-Axis, Y-Axis or origin
#include <stdio.h>

int main() {
    int x,y;
    printf("X-coordinate: ");
    scanf("%d",&x);
    printf("Y-coordinate: ");
    scanf("%d",&y);
    if (x==0 && y==0) printf("Point lies on Origin.");
    else if (x==0) printf("Point lies on Y axis."); // else if runs if if-part is false.
    else printf("Point lies on X Axis.");
    return 0;
}